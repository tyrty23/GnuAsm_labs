#include <iostream>
#include <iomanip>

void printPointer(void* p){

    static char *p1 = reinterpret_cast<char *>(p);
    std::cout<<"value of char *p1 is              "<<*p1<<std::endl;
    std::cout<<"value of char *p1 +1 is           "<<*(p1+1)<<std::endl;

    unsigned short *p2 = reinterpret_cast<unsigned short *>(p);
    std::cout<<"value of unsigned short *p2 is    "<<*p2<<std::endl;
    std::cout<<"value of unsigned short *p2 +1 is "<<*(p2+1)<<std::endl;

    double *p3 = reinterpret_cast<double *>(p);
    std::cout<<"value of double *p3 is            "<<*p3<<std::endl;
    std::cout<<"value of double *p3 +1 is         "<<*(p3+1)<<std::endl;

}

int main(){
    std::cout<<std::hex;
    char b[] ="0123456789abcdef";
    long long a=0x1122334455667788;

    std::cout<<"test value = 0x1122334455667788"<<std::endl;
    void* p=reinterpret_cast<void *>(&a);
    printPointer(p);

    std::cout<<std::endl;

    std::cout<<"test value = \"0123456789abcdef\""<<std::endl;
    p=reinterpret_cast<void *>(&b);
    printPointer(p);

    
    return 0;
}