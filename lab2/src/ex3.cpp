#include <iostream>
#include <iomanip>

void printDump(void* p,size_t N){
    unsigned char * p1= reinterpret_cast<unsigned char *>(p);
    for (size_t i=0;i<N;i++){
        printf("%02hhX ",*(p1+i));
    }
    printf("\n");

}

int main(){

    std::cout<<"item 1"<<std::endl;
    int a=5;
    void* p=reinterpret_cast<void *>(&a);
    printDump(p,4);

    std::cout<<"item 2"<<std::endl;
    int b[]={5,-5,(int)0xFF007100};
    p=reinterpret_cast<void *>(&b);
    printDump(p,12);

    std::cout<<"item 3"<<std::endl;
    double c=1.5;
    p=reinterpret_cast<void *>(&c);
    printDump(p,8);

    return 0;
}