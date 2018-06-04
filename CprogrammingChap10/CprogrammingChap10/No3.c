/*
#include <stdio.h>
//유클리드 호제법으로 최대공약수 구하기
int euclidean(int, int);

int main(void) {

	int num1;
	int num2;
	int result;
	printf("두 개의 정수를 입력하시오.(스페이스로 구분): ");
	scanf("%d %d", &num1, &num2);

	result = euclidean(num1, num2);
	printf("두 수의 최대공약수는 %d이다.\n", result);

	return 0;
}

int euclidean(int num1, int num2) {

	int result;
	int c;
	int r;
	
	if (num1 < num2) {
		c = num1;
		num1 = num2;
		num2 = c;
	}
	
	r = num1 % num2;

	if (r != 0) {
		result = euclidean(num2, r);
	}
	else {
		result = num2;
	}

	return result;
}
*/