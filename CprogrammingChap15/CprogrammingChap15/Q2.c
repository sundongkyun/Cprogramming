/*
#include <stdio.h>

int main(void) {

	int dec, bin, sum = 0, i = 1, condition = 1;
	printf("10진수 정수 입력; ");
	scanf("%d", &dec);

	while (condition) {
		bin = dec % 2;	
		sum += bin * i;
		i *= 10;
		if (dec == 1) {
			break;
		}
		dec = dec / 2;
	}

	printf("%d\n", sum);

	return 0;
}
*/