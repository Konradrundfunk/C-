#include <cstdlib>
#include <iostream>
#include <ostream>
#include <string>

void pointers(){
    int *l = nullptr;
    l = (int*) malloc(sizeof(int));
    *l = 2343;
    std::cout << *l << std::endl;
    free(l);
    std::cout << *l << std::endl;

    int *c = NULL;
    int a = 12; 
    c = &a;
    std::cout << c << std::endl;
    std::string b = "Hello World";
    print(b);
    if(c != NULL){
        print("not null");
    }
    else{
        print("null");
    }
    std::cout << &c << std::endl;
    std::cout << c << std::endl;
    std::cout << a << std::endl;
    *c = 100;
    std::cout << a << std::endl;

}