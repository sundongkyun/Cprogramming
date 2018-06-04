/*
#include <stdio.h>

int main(void) {
	char arr[100];
	char max = 0;
	int length = 0;

	printf("영단어를 입력하시오. ");
	scanf("%s", arr);
	printf("\n");

	while (arr[length] != 0) {
		length++;
	}

	for (int i = 0; i < length; i++) {
		if (max < arr[i]) {
			max = arr[i];
		}
	}

	printf("가장 큰 아스키 코드 값의 문자: %c\n", max);

	return 0;
}
*/