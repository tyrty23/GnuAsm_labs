#include <iostream>

#define N 5

#define PRINT_i(arr, type) \
    std::cout << "\n" #arr " in hex:     "; \
    for (int i = 0; i < N; i++) { \
        printf("%#0*llx ", (int)(sizeof(type) * 2 + 2), static_cast<long long>(arr[i])); \
    } \
    std::cout << std::endl;

int main() {
    int xl = 0xADE1A1D;
    int Ml[N]{xl, xl, xl, xl, xl};
    size_t index = 2;
    int *base = Ml;

    std::cout << "\n\nint" << std::endl;
    PRINT_i(Ml, int);

    asm volatile(
        "movl $-1, (%0,%1,4)\n\t" 
        : 
        : "r"(base), "r"(index)
    );

    PRINT_i(Ml, int);

    return 0;
}