#include <iostream>
#include <iomanip>

void viewPointer(void* p){
    std::cout<<"address void *p is               "<<p<<std::endl;

    static char *p1 = reinterpret_cast<char *>(p);
    std::cout<<"address char *p1 is              "<<p<<std::endl;
    std::cout<<"address char *p1 +1 is           "<<reinterpret_cast<void *>(p1+1)<<std::endl;

    unsigned short *p2 = reinterpret_cast<unsigned short *>(p);
    std::cout<<"address unsigned short *p2 is    "<<p2<<std::endl;
    std::cout<<"address unsigned short *p2 +1 is "<<p2+1<<std::endl;

    double *p3 = reinterpret_cast<double *>(p);
    std::cout<<"address double *p3 is            "<<p3<<std::endl;
    std::cout<<"address double *p3 +1 is         "<<p3+1<<std::endl;

}

int main(){
    char a='g';
    void* p=reinterpret_cast<void *>(&a);
    viewPointer(p);

    return 0;
}