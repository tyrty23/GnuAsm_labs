#include <iostream>
#include <stdio.h>
#define N 5

int main() {
	int newAr[N];
	unsigned int M[N]{0xADE1A1DA,0xADE1A1DA,0xADE1A1DA,0xADE1A1DA,0xADE1A1DA};
	for (int i=0;i<N;i++) std::cout << M[i] << " ";
	for (int i=0;i<N;i++) newAr[i]=M[i];
	int inputCount = scanf("%d %d %d %d %d", &newAr[0], &newAr[1], &newAr[2], &newAr[3], &newAr[4]);
	
    if (inputCount > N) {
        printf("Ошибка ввода! Введено %d элементов, требуется не более 5-ти элементов.\n", inputCount);
        return 1;
    }
	

	for (int i = 0; i < 5; i++) {
        M[i] = newAr[i];
    }

	for (int i=0;i<N;i++) std::cout << M[i] << " " ;
	std::cout << std::endl;

	return 0;
}
