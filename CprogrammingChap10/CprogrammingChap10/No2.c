/*
#include <stdio.h>

void googoodan(int, int);

int main(void) {
	int num1;
	int num2;
	printf("두 개의 정수를 입력하시오.(스페이스로 구분): ");
	scanf("%d %d", &num1, &num2);
	googoodan(num1, num2);

	return 0;
}

void googoodan(int num1, int num2) {
	int c;
	if (num1 > num2) {
		c = num1;
		num1 = num2;
		num2 = c;
	}

	for (int i = num1; i < num2 + 1; i++) {
		for(int j = 1; j < 10; j++) {
			printf("%d X %d = %d\n", i, j, i*j);
		}
		printf("----------------------------\n");
	}
	return;
}
*/