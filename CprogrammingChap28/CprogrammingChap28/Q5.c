/*
#include <stdio.h>

int main(void) {
	char ch, dh;

	FILE * txt1 = fopen("C:/Users/tkskd/Desktop/word.txt", "rt");
	FILE * txt2 = fopen("C:/Users/tkskd/Desktop/word2.txt", "rt");

	if (txt1 == NULL || txt2 == NULL) {
		printf("���� ���� ����! �����մϴ�.\n");
		return -1;
	}

	while (1) {
		ch = fgetc(txt1);
		dh = fgetc(txt2);

		if (ch != dh) {
			printf("�ΰ��� ������ �ٸ� �����Դϴ�.\n");
			break;
		}

		else if (ch == feof(txt1) && dh == feof(txt2)) {
			printf("�ΰ��� ������ ������ ��ġ �մϴ�.\n");
			break;
		}
	}

	fclose(txt1);
	fclose(txt2);
	return 0;
}
*/