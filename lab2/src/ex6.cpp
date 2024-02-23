#include <iostream>
#include <iomanip>
#include <bitset>

void print64(void* p){
    unsigned int a=*reinterpret_cast<unsigned int*>(p);
    int b=*(reinterpret_cast<int *>(p));
    float c=*(reinterpret_cast<float *>(p));
    double d=*(reinterpret_cast<double *>(p));

    std::bitset<32> a2{a};
    std::bitset<32> b2{(unsigned )b};

    std::cout
    <<std::setw(17)<<std::hex<<a            //а
    <<std::setw(65)<<a2                     //б
    <<std::setw(20)<<std::dec<<a             //в
    <<std::setw(20)<<std::dec<<b             //е
    <<std::setw(50)<<std::setprecision(4)<<std::fixed<<c          //ж
    <<std::setw(25)<<std::setprecision(4)<<std::scientific<<c     //з
     <<std::setw(25)<<std::setprecision(4)<<d
    <<std::endl;

}

int main(){
    std::cout<<"\n"
    <<std::setw(9)<<"hex"           
    <<std::setw(65)<<"binary"                    
    <<std::setw(20)<<"udec"            
    <<std::setw(20)<<"dec"           
    <<std::setw(50)<<"fixed"        
    <<std::setw(25)<<"exp"
    <<std::endl;


    std::cout<<"\nМинимальное целое 32-битное значение без знака:"<<std::endl;
    unsigned int a=0;
    void* p=reinterpret_cast<void *>(&a);
    print64(p);

    std::cout<<"\nМаксимальное целое 64-битное значение без знака:"<<std::endl;
    unsigned long long b = 18446744073709551615ULL;
    p=reinterpret_cast<void *>(&b);
    print64(p);

    std::cout<<"\nМинимальное целое 64-битное значение со знаком:"<<std::endl;
    long long int c=-922337203685477580LL-1;
    p=reinterpret_cast<void *>(&c);
    print64(p);

    std::cout<<"\nМаксимальное целое 64-битное значение со знаком:"<<std::endl;
    long long int d=9223372036854775807;
    p=reinterpret_cast<void *>(&d);
    print64(p);

    std::cout<<"\nЦелочисленное значение х = 5:"<<std::endl;
    int e=5;
    p=reinterpret_cast<void *>(&e);
    print64(p);

    std::cout<<"\nЦелочисленное значение y = -5:"<<std::endl;
    int f=-5;
    p=reinterpret_cast<void *>(&f);
    print64(p);

    std::cout<<"\nЦелочисленное значение z = 0xFF007100:"<<std::endl;
    unsigned int g=0xFF007100;
    p=reinterpret_cast<void *>(&g);
    print64(p);

    std::cout<<"\nfloat-значение х = 5:"<<std::endl;
    float h=5;
    p=reinterpret_cast<void *>(&h);
    print64(p);

    std::cout<<"\nfloat-значение y = -5:"<<std::endl;
    h=-5;
    p=reinterpret_cast<void *>(&h);
    print64(p);

    std::cout<<"\nfloat-значение z = 0xFF007100:"<<std::endl;
    h=0xFF007100;
    p=reinterpret_cast<void *>(&h);
    print64(p);


    return 0;
}