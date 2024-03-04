#include <iostream>


int main() {
    short x=8;
    short y=9;
    short z=0;
    short w=0;

    asm volatile(
        "movw %2,%%ax\n\t" // x to eax
        "movw %3, %%cx\n\t" // y to ecx
        "add %%ax,%0 \n\t" // z = z + x
        "add %%cx,%0 \n\t" // z = z + y
        "add %%ax,%1 \n\t" // w = w + x
        "sub %%cx,%1 \n\t" // w = w + y
        : "=m"(z),"=m"(w)
        : "m"(x), "m"(y)
        : "ax", "cx", "memory"
    );
    std::cout<<"z = "<<z<<std::endl;
    std::cout<<"w = "<<w<<std::endl;
    return 0;
}