#include <iostream>
#define N 5
#define PRINT_f(arr,type)\
    std::cout << "\n\n"#arr " in decimal: "; \
    for (int i = 0; i < N; i++) { printf("%.2f ", arr[i]); } \
    std::cout << "\n"#arr " in exp:     "; \
    for (int i = 0; i < N; i++) { printf("%.2e ", arr[i]); } \
    std::cout<<std::endl;

int main() {
    bool AVX_bit;
    asm(
        "cpuid\n"
        "test $(1 << 28), %%ecx\n"
        : "=@ccnz"(AVX_bit)
        : "a"(1)
        : "ebx", "ecx", "edx", "cc"
    );
    std::cout<<"AVX_bit = "<<AVX_bit<<std::endl;
    std::cout<<"AVX is available"<<std::endl;

    float x1 = -8.0f/5.0f;
    double x2 = -8.0/5.0;
    float Mfs[N]{x1,x1,x1,x1,x1};
    double Mfl[N]{x2,x2,x2,x2,x2};
    PRINT_f(Mfs,float);
    PRINT_f(Mfl,double);
    
    return 0;
}