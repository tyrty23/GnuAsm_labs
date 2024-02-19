#include <iostream>
#define N 5

template <class T>
void show(int n){

}

int main(){

    unsigned short int Ms[N]{0xFADE,0xFADE,0xFADE,0xFADE,0xFADE};
    unsigned int Ml[N]{0xADE1A1DA,0xADE1A1DA,0xADE1A1DA,0xADE1A1DA,0xADE1A1DA};
    long long Mq[N]{0xC1A551F1AB1E,0xC1A551F1AB1E,0xC1A551F1AB1E,0xC1A551F1AB1E,0xC1A551F1AB1E};
    float Mfs[N]{-1.6,-1.6,-1.6,-1.6,-1.6};
    double Mfl[N]{-1.6,-1.6,-1.6,-1.6,-1.6};

    std::cout<<Ms[0];//нужны временно, чтоб компилировалось
    std::cout<<Ml[0];
    std::cout<<Mq[0];
    std::cout<<Mfs[0];
    std::cout<<Mfl[0];

    return 0;
}