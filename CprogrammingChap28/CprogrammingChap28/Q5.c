/*
#include <stdio.h>

int main(void) {
	char ch, dh;

	FILE * txt1 = fopen("C:/Users/tkskd/Desktop/word.txt", "rt");
	FILE * txt2 = fopen("C:/Users/tkskd/Desktop/word2.txt", "rt");

	if (txt1 == NULL || txt2 == NULL) {
		printf("파일 오픈 실패! 종료합니다.\n");
		return -1;
	}

	while (1) {
		ch = fgetc(txt1);
		dh = fgetc(txt2);

		if (ch != dh) {
			printf("두개의 파일은 다른 파일입니다.\n");
			break;
		}

		else if (ch == feof(txt1) && dh == feof(txt2)) {
			printf("두개의 파일은 완전히 일치 합니다.\n");
			break;
		}
	}

	fclose(txt1);
	fclose(txt2);
	return 0;
}
*/