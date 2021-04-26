#include <cstdio>
#include <iostream>
#include <ostream>

void file (){
    FILE *file = fopen("file2.txt", "r");
    std::cout << file << std::endl;
    char c = fgetc(file);
    std::cout << c << std::endl;    
    //fclose(file);

}