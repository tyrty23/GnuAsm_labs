#include <iostream>
#define N 5

#define PRINT_(arr,type)\
    std::cout << "\n"#arr " in decimal: "; \
    if (typeid(arr[0])==typeid(x1) || typeid(arr[0]) ==typeid(x2)){\
        for (int i = 0; i < N; i++) { printf("%.2f ", arr[i]); } \
        std::cout << std::endl; \
        std::cout << "\n"#arr " in exp: "; \
        for (int i = 0; i < N; i++) { printf("%.2e ", arr[i]); } \
    }\
    else{\
        for (int i = 0; i < N; i++) { printf("%lld ", static_cast<long long>(arr[i])); } \
        std::cout << std::endl; \
        std::cout << "\n"#arr " in hex: "; \
        for (int i = 0; i < N; i++) { printf("%#0*llx ", (int)(sizeof(type)*2 + 2), static_cast<long long>(arr[i]));} \
    } \
    std::cout << std::endl;

int main(){
    int xs=0xFADE;
    long long xl = 0xADE1A1DA;
    long long xq = 0xC1A551F1AB1E;
    float x1 = -8.0f/5.0f;
    double x2 = -8.0/5.0;
    int Ms[N]{xs,xs,xs,xs,xs};
    long long Ml[N]{xl,xl,xl,xl,xl};
    long long Mq[N]{xq,xq,xq,xq,xq};
    float Mfs[N]{x1,x1,x1,x1,x1};
    double Mfl[N]{x2,x2,x2,x2,x2};


    PRINT_(Ms,int);
    PRINT_(Ml,long long);
    PRINT_(Mq,long long);
    PRINT_(Mfs,float);
    PRINT_(Mfl,double);

    return 0;
}