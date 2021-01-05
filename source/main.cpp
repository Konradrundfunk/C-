#include <iostream>
#include "test.h"

void firsttryies()
{
    iftest(34,34,12);
    bool testing = 67 * 89 == 21;
    if(testing)
    {
        std::cout << "true" << std::endl;
    }
    else
    {
        std::cout << "false again" << std::endl;
    }
    calc_log(34, 4234);
    test();
    int sum = calc(3,54);
    std::cout << "Hello World" << std::endl;
    std::cout << sum;
}
int main(){
    firsttryies();

}
