/*
#include <stdio.h>

int main(void) {
	int a_count = 0, p_count = 0, ch = 0;
	char word[50];

	FILE * fp = fopen("C:/Users/tkskd/Desktop/word.txt", "rt");
	if (fp == NULL) {
		printf("파일오픈 실패! 종료합니다.\n");
		return -1;
	}

	do {
		fscanf(fp, "%s", &word);
		if (word[0] == 'A' || word[0] == 'a') {
			a_count++;
		}
		else if (word[0] == 'P' || word[0] == 'p') {
			p_count++;
		}
	} while ((ch = fgetc(fp)) != EOF);

	printf("A로 시작하는 단어 수: %d\n", a_count);
	printf("P로 시작하는 단어 수: %d\n", p_count);


	fclose(fp);
	return 0;
}
*/