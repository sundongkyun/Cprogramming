/*
#include <stdio.h>

void printOdd(int * array);
void printEven(int * array);

int main(void) {
	int array[10];
	
	printf("총 10개의 숫자 입력\n");
	for (int i = 0; i < 10; i++) {
		printf("입력: ");
		scanf("%d", &array[i]);
	}
	
	printOdd(array);
	printf("\n");
	printEven(array);
	printf("\n");

	return 0;
}

void printOdd(int * array) {
	printf("홀수 출력: ");
	for (int i = 0; i < 10; i++) {
		if ((array[i] % 2) != 0) {
			printf("%d, ", array[i]);
		}
	}
}

void printEven(int * array) {
	printf("짝수 출력: ");
	for (int i = 0; i < 10; i++) {
		if ((array[i] % 2) == 0) {
			printf("%d, ", array[i]);
		}
	}
}
*/