#include <stdio.h>
#include <stdlib.h>
#include <deposit.h>
#include <ctest.h>
#define CTEST_COLOR_OK


CTEST(input, srok_30_vklad_100000) {
    int srok, vklad;
    
    const int result = input(&vklad, &srok);
    
    ASSERT_EQUAL(1, result);
}
CTEST(input, srok_0_vklad_100000) {
    int srok, vklad;
    
    const int result = input(&vklad, &srok);
    
    ASSERT_EQUAL(0, result);
}
CTEST(input, srok_31_vklad_0) {
    int srok, vklad;
    
    const int result = input(&vklad, &srok);
    
    ASSERT_EQUAL(0, result);
}
