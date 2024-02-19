#include <iostream>
#define N 5

#define PRINT_(arr,type)\
    float x1 = -8.0f/5.0f;\
    double x2 = -8.0/5.0;\
    std::cout << "\n"#arr " in decimal: "; \
    if (typeid(arr[0])==typeid(x1) || typeid(arr[0]) ==typeid(x2)){\
            \
    }\
    else{\
        printf("%lld, %lld, %lld, %lld, %lld\n",arr[0],arr[1],arr[2],arr[3],arr[4]) ;   \
    } 

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

    std::cout<<Ms[0];//нужны временно, чтоб компилировалось
    std::cout<<Ml[0];
    std::cout<<Mq[0];
    std::cout<<Mfs[0];
    std::cout<<Mfl[0];

    PRINT_(Ml,long long);
    return 0;
}