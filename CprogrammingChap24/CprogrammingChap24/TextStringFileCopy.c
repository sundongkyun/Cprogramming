/*
#include <stdio.h>

int main(void) {
	FILE * src = fopen("C:/Users/tkskd/Desktop/src2.txt", "rt");
	FILE * des = fopen("C:/Users/tkskd/Desktop/des2.txt", "wt");
	char str[30];

	if (src == NULL || des == NULL) {
		puts("���� ���� ����!");
		return -1;
	}

	while (fgets(str, sizeof(str), src) != NULL)
		fputs(str, des);

	if (feof(src) != 0)
		puts("���� ���� ����!");
	else
		puts("���� ���� ����!");

	fclose(src);
	fclose(des);


	return 0;
}
*/