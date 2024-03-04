#include <iostream>
#define N 5
#define PRINT_f(arr,type)\
    std::cout << "\n\n"#arr " in decimal: "; \
    for (int i = 0; i < N; i++) { printf("%.2f ", arr[i]); } \
    std::cout<<std::endl;

int main() {


    float x1 = -8.0f/5.0f;
    float Mfs[N]{x1,x1,x1,x1,x1};
    PRINT_f(Mfs,float);
    int x=4;
    size_t index = 2;
    float *base = Mfs;
    asm(
        "cvtsi2ss %2, %%xmm1\n\t"
        "movss %%xmm1, (%0,%1,4)\n\t" 
        : 
        : "r"(base), "r"(index),"m"(x)
        : "xmm1", "memory"
    );
    PRINT_f(Mfs,float);
    
    return 0;
}