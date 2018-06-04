/*
#include <stdio.h>

int pow(int,int);

int main(void) {
	int num;
	printf("정수 입력: ");
	scanf("%d", &num);

	printf("2의 %d승은: %d\n", num, pow(2,num));
	return 0;
}

int pow(int k, int num) {

	if (num == 0) {
		return 1;
	}

	k = k * pow(k, --num);

	return k;
}
*/