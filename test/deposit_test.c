#include <stdio.h>
#include <deposit.h>
#include <ctest.h>
#define CTEST_COLOR_OK

CTEST(deposit_calc, test1) 
{    
    ASSERT_EQUAL(90000, deposit_calc(30, 100000));
}

CTEST(deposit_calc, test2) 
{   
    ASSERT_EQUAL(-1, deposit_calc(10, 20));
}

CTEST(deposit_calc, test3) 
{    
    ASSERT_EQUAL(345000, deposit_calc(365, 300000));
}

CTEST(deposit_calc, test4) 
{    
    ASSERT_EQUAL(113300, deposit_calc(31, 110000));
}

CTEST(deposit_calc, test5)
{
    ASSERT_EQUAL(172500, deposit_calc(245, 150000));
}

CTEST(deposit_calc, test6)
{
    ASSERT_EQUAL(10600, deposit_calc(123, 10000));
}
