#include "test.h"

void log(const char* loginp)
{
    std::cout << loginp << std::endl;
}

//Just messing around with numbers and functions

int calc(int num1,int num2 )
{
    return num1 + num2;
}

void calc_log(int num1, int num2)
{
    std::cout << num1 * num2 << std::endl;
}
//for loop example

void logs( const char* inp, int howmany)
{
    for(int i = 1; i < howmany; i++) 
    {
        log(inp);
    }
}

//while example

void example1(bool test1)
{
    while(test1)
    {
        log("while triggered");
        test1 = 0;
    }
}


void example2(bool test1)
{
    do
    {
        log("while triggered");
        //test1 = 0;
    }while(test1);
}

//messing around with if and else

void lololol(int num1,int num2, int num3){
    if(num1 * num2 == num3 || num1 == num2)
    {
     std::cout << "sucsess" << std::endl;
    } 
    else
    {
       std::cout << "fail" << std::endl;
    }
}

//control flow

void control1(int num1)
    {
        for(int i = 0 ; i < num1 ; i++ )
        {
            // does print an uneven nums
            if( i % 2 == 1)
            {
                continue;
            }else{std::cout << i + 1 << std::endl;}
        }
    }

void control2(int num1)
    {
        for(int i = 0 ; i < num1 ; i++ )
        {
            if(i + 1 > 6){break;}
            std::cout << i + 1 << std::endl;
        }
    }
int control3(int num1)
    {
        int y = 0;
        for(int i = 0 ; i < num1 ; i++ )
        {
            y += i;
            i--;
            i++;
        }
        return y;
    }
//pointer <yey noises> 
void pointer1()
{
    //nullpointer
    void* ptr = nullptr;
    int var = 8;
    //real pointer and overriding it 
    int* ptr1 = &var;
    *ptr1 = 100;
    //now going to memory
    char* buffer = new char[8];
    memset(buffer,0,8);
    
}

