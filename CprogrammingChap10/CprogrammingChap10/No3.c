/*
#include <stdio.h>
//��Ŭ���� ȣ�������� �ִ����� ���ϱ�
int euclidean(int, int);

int main(void) {

	int num1;
	int num2;
	int result;
	printf("�� ���� ������ �Է��Ͻÿ�.(�����̽��� ����): ");
	scanf("%d %d", &num1, &num2);

	result = euclidean(num1, num2);
	printf("�� ���� �ִ������� %d�̴�.\n", result);

	return 0;
}

int euclidean(int num1, int num2) {

	int result;
	int c;
	int r;
	
	if (num1 < num2) {
		c = num1;
		num1 = num2;
		num2 = c;
	}
	
	r = num1 % num2;

	if (r != 0) {
		result = euclidean(num2, r);
	}
	else {
		result = num2;
	}

	return result;
}
*/