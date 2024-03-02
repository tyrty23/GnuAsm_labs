#include <iostream>
#define N 5

#define PRINT_i(arr,type)\
    std::cout << "\n"#arr " in hex:     "; \
    for (int i = 0; i < N; i++) { printf("%#0*llx ", (int)(sizeof(type)*2 + 2), static_cast<long long>(arr[i]));} \
    std::cout << std::endl;

int main(){
    int xl = 0xADE1A1D;
    int Ml[N]{xl,xl,xl,xl,xl};
    size_t i=2;
    std::cout<<"\n\nint"<<std::endl;
    PRINT_i(Ml,int);
    asm(    
        "mov eax,%1"
        "mov ebx,%2"

        "mov , -1;\n"
        : 
        : "r"(&Ml),"r"(i) 
        : "eax","ebx"
    );
    PRINT_i(Ml,int);

    return 0;
}
        

