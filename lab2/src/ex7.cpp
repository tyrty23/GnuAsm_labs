#include <iostream>
#include <cstring>
#include <locale.h>

void printDump(void* p, size_t N) {
    unsigned char* p1 = reinterpret_cast<unsigned char*>(p);
    for (size_t i = 0; i < N; i++) {
        printf("%02hhX ", *(p1 + i));
    }
    printf("\n");
}

int main() {

    setlocale(LC_ALL, "russian");

    char str1[] = "jzyx";
    char str2[] = "ёяюэ";

    std::cout << "Хранение в памяти строки \"jzyx\":\n";
    printDump(str1, strlen(str1) + 1);  // Учитываем завершающий нулевой символ
    std::cout << "Хранение в памяти строки \"ёяюэ\":\n";
    printDump(str2, strlen(str2) + 1);  // Учитываем завершающий нулевой символ

    // Широкие строки
    wchar_t str3[] = L"jzyx";
    wchar_t str4[] = L"ёяюэ";

    std::cout << "Хранение в памяти широкой строки L\"jzyx\":\n";
    printDump(str3, wcslen(str3) * sizeof(wchar_t) + sizeof(wchar_t));  // Учитываем завершающий нулевой символ
    std::cout << "Хранение в памяти широкой строки L\"ёяюэ\":\n";
    printDump(str4, wcslen(str4) * sizeof(wchar_t) + sizeof(wchar_t));  // Учитываем завершающий нулевой символ

    return 0;
}
