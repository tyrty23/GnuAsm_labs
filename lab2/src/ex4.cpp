#include <iostream>
#include <iomanip>
#include <bitset>

void print16(void* p){
    unsigned short int a=*reinterpret_cast<unsigned short int*>(p);
    short b=*(reinterpret_cast<short *>(p));

    std::bitset<16> a2{a};
    std::bitset<16> b2{(unsigned short)b};

    std::cout
    <<std::setw(10)<<std::hex<<a
    <<std::setw(18)<<a2
    <<std::setw(8)<<std::dec<<a
    <<std::setw(10)<<std::hex<<b
    <<std::setw(18)<<b2
    <<std::setw(8)<<std::dec<<b
    <<std::endl;

}

int main(){
    std::cout<<"\nМинимальное целое 16-битное значение без знака:"<<std::endl;
    unsigned short int a=0;
    void* p=reinterpret_cast<void *>(&a);
    print16(p);

    std::cout<<"\nМаксимальное целое 16-битное значение без знака:"<<std::endl;
    unsigned short int b=65535;
    p=reinterpret_cast<void *>(&b);
    print16(p);

    std::cout<<"\nМинимальное целое 16-битное значение со знаком:"<<std::endl;
    short int c=-32768;
    p=reinterpret_cast<void *>(&c);
    print16(p);

    std::cout<<"\nМаксимальное целое 16-битное значение со знаком:"<<std::endl;
    short int d=32767;
    p=reinterpret_cast<void *>(&d);
    print16(p);

    std::cout<<"\nЗначение х = 5:"<<std::endl;
    short int e=5;
    p=reinterpret_cast<void *>(&e);
    print16(p);

    std::cout<<"\nЗначение y = -5:"<<std::endl;
    short int f=-5;
    p=reinterpret_cast<void *>(&f);
    print16(p);
    return 0;
}