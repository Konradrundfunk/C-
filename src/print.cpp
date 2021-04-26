#include <iostream>
#include <string>

void print(std::string input){
    std::cout << input << std::endl;
}
int calculate(int test){
    std::cout << test << std::endl;
    test = test + 30; 
    return test;
}