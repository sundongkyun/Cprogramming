/*
#include <stdio.h>

int strlen(char *str);

int main(void) {
	int i, len, result = 1;
	//char * str = 0; �̰͵� ��������
	char str[100];

	printf("���ڿ� �Է� : ");
	scanf("%s", str);

	len = strlen(str);

	for (i = 0; i < len; i++) {
		if (str[i] != str[len - i]) {
			printf("ȸ���� �ƴմϴ�.");
			return 0;
		}
	}
	
	printf("ȸ���Դϴ�.");

	return 0;
}

int strlen(char *str) {
	int i = 0;

	while (str[i] != 0) {
		i++;
	}
	return i - 1;
}
*/