#include <iostream>
#define N 5


#define PRINT_f(arr,type)\
    std::cout << "\n\n"#arr " in decimal: "; \
    for (int i = 0; i < N; i++) { printf("%.2f ", arr[i]); } \
    std::cout << "\n"#arr " in exp:     "; \
    for (int i = 0; i < N; i++) { printf("%.2e ", arr[i]); } \
    std::cout<<std::endl;

#define PRINT_i(arr,type)\
    std::cout << "\n\n"#arr " in decimal: "; \
    for (int i = 0; i < N; i++) { printf("%lld ", static_cast<long long>(arr[i])); } \
    std::cout << "\n"#arr " in hex:     "; \
    for (int i = 0; i < N; i++) { printf("%#0*llx ", (int)(sizeof(type)*2 + 2), static_cast<long long>(arr[i]));} \
    std::cout << std::endl;

int main(){
    unsigned char xs=0xED;    
    unsigned char Ms[N]{xs,xs,xs,xs,xs};

    std::cout<<"Ms :";
    if (!(scanf("%hhx",&Ms[2])==1)){
        puts("incorect Ms[2]");
    }

    PRINT_i(Ms,unsigned char);
    return 0;
}