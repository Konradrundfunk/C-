#include <iostream>
#include "test.h"

//Just messing around with numbers and functions

void test()
{
    if(1>12)
    {
        std::cout << "hi";

    }
    else {
        std::cout << "hi2" << std::endl;
    }

}

int calc(int num1,int num2 )
{
    return num1 + num2;
}

void calc_log(int num1, int num2)
{
    std::cout << num1 * num2 << std::endl;
}


