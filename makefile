.PHONY:all clean

all: build/src/main.o build/src/deposit.o
	gcc -o bin/main build/src/main.o build/src/deposit.o

build/src/main.o: src/main.c
	gcc -Wall -Werror -c src/main.c -o build/src/main.o

build/src/deposit.o: src/deposit.c
	gcc -Wall -Werror -c src/deposit.c -o build/src/deposit.o

build/test/main.o: test/main.c
	gcc -I src -I thirdparty -Wall -Werror -c test/main.c -o build/test/main.o

deposit-test: build/test/main.o
	gcc -o bin/deposit-test build/test/main.o build/src/deposit.o

clean:
	rm -rf build/src/*.o bin/*
	
clean2:
	rm -rf build/test/*.o bin/*
