#include <stdio.h>
#include <string.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "russian");

    char s1[100], s2[100], s3[100];

    printf("Введите слово s1: ");
    scanf_s("%s", s1);

    printf("Введите слово s2 (не более 99 символов): ");
    scanf_s("%99s", s2);

    while (getchar() != '\n'); // Clear input buffer

    printf("Введите строку s3: ");
    fgets(s3, sizeof(s3), stdin);
    s3[strcspn(s3, "\n")] = 0;  // Remove newline character from s3

    printf("***%s***\n", s1);
    printf("***%s***\n", s2);
    printf("***%s***\n", s3);

    return 0;
}
