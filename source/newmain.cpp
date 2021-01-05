#include <iostream>
#include "test.h"

//creating something useful
void log(char text)
{
    std::cout << text << std::endl;
}




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

//messing around with if and else

void iftest(int num1,int num2, int num3){
    if(num1 * num2 == num3 || num1 == num2)
    {
     std::cout << "sucsess" << std::endl;
    } 
    else
    {
       std::cout << "fail" << std::endl;
    }
}
