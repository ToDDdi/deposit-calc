.PHONY:all clean

all: build/main.o build/deposit.o
	gcc -o bin/main build/main.o build/deposit.o
build/main.o: src/main.c
	gcc -Wall -Werror -c src/main.c -o build/main.o
build/deposit.o: src/deposit.c
	gcc -Wall -Werror -c src/deposit.c -o build/deposit.o
clean:
	rm -rf build/*.o bin/*
