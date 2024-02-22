#include <iostream>
#include <iomanip>
#include <bitset>

void print32(void* p){
    unsigned int a=*reinterpret_cast<unsigned int*>(p);
    int b=*(reinterpret_cast<int *>(p));
    float c=*(reinterpret_cast<float *>(p));

    std::bitset<32> a2{a};
    std::bitset<32> b2{(unsigned )b};

    std::cout
    <<std::setw(9)<<std::hex<<a            //а
    <<std::setw(33)<<a2                     //б
    <<std::setw(12)<<std::dec<<a             //в
    <<std::setw(12)<<std::dec<<b             //е

    <<std::setw(50)<<std::setprecision(4)<<std::fixed<<c          //ж
    <<std::setw(25)<<std::setprecision(4)<<std::scientific<<c     //з
    <<std::endl;

}

int main(){
    std::cout<<"\n"
    <<std::setw(9)<<"hex"           
    <<std::setw(33)<<"binary"                    
    <<std::setw(12)<<"udec"            
    <<std::setw(12)<<"dec"           
    <<std::setw(50)<<"fixed"        
    <<std::setw(25)<<"exp"
    <<std::endl;


    std::cout<<"\nМинимальное целое 32-битное значение без знака:"<<std::endl;
    unsigned int a=0;
    void* p=reinterpret_cast<void *>(&a);
    print32(p);

    std::cout<<"\nМаксимальное целое 32-битное значение без знака:"<<std::endl;
    unsigned int b=4294967295  ;
    p=reinterpret_cast<void *>(&b);
    print32(p);

    std::cout<<"\nМинимальное целое 32-битное значение со знаком:"<<std::endl;
    int c=-2147483648;
    p=reinterpret_cast<void *>(&c);
    print32(p);

    std::cout<<"\nМаксимальное целое 32-битное значение со знаком:"<<std::endl;
    int d=2147483647;
    p=reinterpret_cast<void *>(&d);
    print32(p);

    std::cout<<"\nЦелочисленное значение х = 5:"<<std::endl;
    int e=5;
    p=reinterpret_cast<void *>(&e);
    print32(p);

    std::cout<<"\nЦелочисленное значение y = -5:"<<std::endl;
    int f=-5;
    p=reinterpret_cast<void *>(&f);
    print32(p);

    std::cout<<"\nЦелочисленное значение z = 0xFF007100:"<<std::endl;
    unsigned int g=0xFF007100;
    p=reinterpret_cast<void *>(&g);
    print32(p);

    std::cout<<"\nfloat-значение х = 5:"<<std::endl;
    float h=5;
    p=reinterpret_cast<void *>(&h);
    print32(p);

    std::cout<<"\nfloat-значение y = -5:"<<std::endl;
    h=-5;
    p=reinterpret_cast<void *>(&h);
    print32(p);

    std::cout<<"\nfloat-значение z = 0xFF007100:"<<std::endl;
    h=0xFF007100;
    p=reinterpret_cast<void *>(&h);
    print32(p);

    return 0;
}