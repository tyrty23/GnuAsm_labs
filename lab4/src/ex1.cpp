#include <iostream>
#define N 5

#define PRINT_i(arr,type)\
    std::cout << "\n\n"#arr " in decimal: "; \
    for (int i = 0; i < N; i++) { printf("%lld ", static_cast<long long>(arr[i])); } \
    std::cout << "\n"#arr " in hex:     "; \
    for (int i = 0; i < N; i++) { printf("%#0*llx ", (int)(sizeof(type)*2 + 2), static_cast<long long>(arr[i]));} \
    std::cout << std::endl;

int main(){
    short xs=0xFADE;
    int xl = 0xADE1A1D;
    long long xq = 0xC1A551F1AB1E;
    short Ms[N]{xs,xs,xs,xs,xs};
    int Ml[N]{xl,xl,xl,xl,xl};
    long long Mq[N]{xq,xq,xq,xq,xq};



    PRINT_i(Ms,short);
    short a = 16;
    asm(
        "mov dl, %1\n\t"
        //"mov %0, eax\n\t"
        : "=a" (Ms[2]) 
        : "r" (a)
    );
    PRINT_i(Ms,short);


    PRINT_i(Ml,int);
    PRINT_i(Mq,long long);

    return 0;
}
        

