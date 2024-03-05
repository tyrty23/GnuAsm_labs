#include <iostream>

#define N 5

#define PRINT_i(arr, type) \
    std::cout << "\n" #arr " in hex:     "; \
    for (int i = 0; i < N; i++) { \
        printf("%#0*llx ", (int)(sizeof(type) * 2 + 2), static_cast<long long>(arr[i])); \
    } \
    std::cout << std::endl;

int main() {
    long long xq = 0xC1A551F1AB1E;
    long long Mq[N]{xq,xq,xq,xq,xq};
    size_t index = 2;
    long long *base = Mq;

    std::cout << "\n\nint" << std::endl;
    PRINT_i(Mq, long long);

    asm volatile(    
        "movb $0xBB, 0x3(%0,%1,8)\n\t"
        : 
        : "r"(base), "r"(index)
        : 
    );

    PRINT_i(Mq, long long);

    return 0;
}