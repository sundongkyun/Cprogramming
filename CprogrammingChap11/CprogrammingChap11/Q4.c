/*
#include <stdio.h>

int main(void) {
	char arr[100];
	int length = 0;
	char c;
	printf("영단어를 입력하시오. ");
	scanf("%s", arr);

	while (arr[length] != '\0') {
		length++;
	}

	for(int j=0; j<length/2; j++) {
		
		c = arr[j];
		arr[j] = arr[length - j - 1];
		arr[length - j - 1] = c;

	}

	printf("%s\n", arr);
	return 0;
}
*/