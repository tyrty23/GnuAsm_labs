#include <cstddef>
#include <iostream>
#define print_size(type)\
    std::cout<<"The size of a " #type" is: "<< sizeof(type)<<" bytes"<<std::endl;


int main(){
    // Ubuntu 22.04 LTS, 64 битная версия
    // компилятор g++ (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0
    // 
    // AMD® Ryzen 7 5800h
    // x86 -64 , процессор общего назначения


    std::cout  
        <<"Ubuntu 22.04 LTS, 64 битная версия"
        <<"\nКомпилятор g++ (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0"
        <<"\nAMD® Ryzen 7 5800h, x86 -64, процессор общего назначения"
        <<std::endl;
    std::cout<<std::endl;
    print_size(char);
    print_size(signed char);
    print_size(unsigned char);
    print_size(char *);
    print_size(bool);
    print_size(wchar_t);
    print_size(short);
    print_size(int);
    print_size(long);
    print_size(long long);
    print_size(float);
    print_size(double);
    print_size(long double);
    print_size(size_t);
    print_size(ptrdiff_t);
    print_size(void *);
    return 0;
}