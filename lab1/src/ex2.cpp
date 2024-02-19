#include <cstddef>
#include <iostream>
#define c char
#define sc signed char
#define usc unsigned char
#define c_ char*
#define b bool
#define wc wchar_t
#define s short
#define i int 
#define l long 
#define ll long long
#define f float
#define d double
#define ld long double
#define st size_t
#define p ptrdiff_t
#define v void*

int main(){
    // Ubuntu 22.04 LTS, 64 битная версия
    // компилятор g++ (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0
    // 
    // AMD® Ryzen 7 5800h
    // x86 -64 , процессор общего назначения


    std::cout  
        <<"Ubuntu 22.04 LTS, 64 битная версия"
        <<"\nКомпилятор g++ (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0"
        <<"\nAMD® Ryzen 7 5800h, x86 -64, процессор общего назначения"
        << "\nThe size of a char is: " << sizeof( c ) 
        << "\nThe size of a signed char is: " << sizeof( sc ) 
        << "\nThe size of a unsigned char is: " << sizeof( usc ) 
        << "\nThe size of a char* is: " << sizeof( c_ ) 
        << "\nThe size of a bool is: " << sizeof( b ) 
        << "\nThe size of a wchar_t is: " << sizeof( wc ) 
        << "\nThe size of a short is: " << sizeof( s ) 
        << "\nThe size of a int is: " << sizeof( i ) 
        << "\nThe size of a long is: " << sizeof( l ) 
        << "\nThe size of a long long is: " << sizeof( ll ) 
        << "\nThe size of a float is: " << sizeof( f ) 
        << "\nThe size of a double is: " << sizeof( d )
        << "\nThe size of a long double is: " << sizeof( ld )
        << "\nThe size of a size_t is: " << sizeof( st )
        << "\nThe size of a ptrdiff_t is: " << sizeof( p )
        << "\nThe size of a void* is: " << sizeof( v )        
        <<std::endl; 

    return 0;
}