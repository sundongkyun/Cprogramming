#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
	int maxlen, len, i;
	char * str;

	printf("문자열 크기를 입력하시오. ");
	scanf("%d", &maxlen);
	getchar();
	str = (char * )malloc(sizeof(char)*(maxlen+1));
	if (str == NULL) {
		printf("동적할당실패!\n");
		return -1;
	}

	printf("문자열을 입력하시오. ");
	fgets(str, maxlen+1, stdin);
	str[strlen(str) - 1] = 0;
	len = strlen(str);
	for (i = len; i > 0; i--) {
		if (str[i] == ' ') {
			printf("%s ", &str[i + 1]);
			str[i] = 0;
		}
	}
	printf("%s", &str[0]);
	free(str);

	return 0;
}