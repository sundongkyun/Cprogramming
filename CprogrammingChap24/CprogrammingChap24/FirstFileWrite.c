/*
#include <stdio.h>

int main(void) {
	
	FILE * fp = fopen("C:/Users/tkskd/Desktop/data.txt", "wt");
	if (fp == NULL) {
		puts("파일오픈 실패!");
		return -1;
	}

	fputc('A', fp);
	fputc('B', fp);
	fputc('C', fp);
	fclose(fp);
	return 0;
	
	int ch, i;
	FILE * fp = fopen("C:/Users/tkskd/Desktop/data.txt", "rt");
	if (fp == NULL) {
		puts("파일오픈 실패!");
		return -1;
	}

	for (i = 0; i < 3; i++) {
		ch = fgetc(fp);
		printf("%c \n", ch);
	}
	close(fp);
	return 0;
	
}*/