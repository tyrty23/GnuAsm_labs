#include <iostream>
#define N 5

#define PRINT_i(arr,type)\
    std::cout << "\n"#arr " in hex:     "; \
    for (int i = 0; i < N; i++) { printf("%#0*llx ", (int)(sizeof(type)*2 + 2), static_cast<long long>(arr[i]));} \
    std::cout << std::endl;

int main(){
    short xs=0xEADE;
    int xl = 0xADE1A1D;
    long long xq = 0xC1A551F1AB1E;
    short Ms[N]{xs,xs,xs,xs,xs};
    int Ml[N]{xl,xl,xl,xl,xl};
    long long Mq[N]{xq,xq,xq,xq,xq};

    std::cout<<"\n\nshort"<<std::endl;
    PRINT_i(Ms,short);
    asm(
        "movw ax, 16;\n"
        "movw %0, ax;\n"
        : "=m" (Ms[2]) 
    );
    PRINT_i(Ms,short);

    std::cout<<"\n\nint"<<std::endl;
    PRINT_i(Ml,int);
    asm(
       "mov eax, 16;\n"
        "mov %0, eax;\n"
        : "=m" (Ml[2]) 
    );
    PRINT_i(Ml,int);

    std::cout<<"\n\nlong long"<<std::endl;
    PRINT_i(Mq,long long);
    asm(
        "movq rax, 16;\n"
        "movq %0, rax;\n"
        : "=m" (Mq[2]) 
    );
    PRINT_i(Mq,long long);

    return 0;
}
        

