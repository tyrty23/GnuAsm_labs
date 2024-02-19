#include <iostream>

#define N 5
int main(){
    unsigned int M[N]{0xADE1A1DA,0xADE1A1DA,0xADE1A1DA,0xADE1A1DA,0xADE1A1DA};
    std::cout
    <<"Адрес начала массива "<<&M
    <<"\nАдрес нулевого элемента "<<&(M[0])
    <<"\nАдрес первого элемента "<<&(M[1])
    <<std::endl;

    return 0;
}