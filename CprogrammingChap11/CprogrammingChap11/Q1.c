/*
#include <stdio.h>

int main(void) {
	int arr[5];
	int max, min, sum=0;
	int length;
	printf("���� 5���� �Է��Ͻÿ�.(�����ڴ� �����̽�) ");
	scanf("%d %d %d %d %d", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4]);

	length = sizeof(arr) / sizeof(int);
	max = arr[0];
	min = arr[0];
	for (int i = 0; i < length; i++) {
		if (max < arr[i]) {
			max = arr[i];
		}
		if (min > arr[i]) {
			min = arr[i];
		}
		sum += arr[i];
	}

	printf("�ִ�: %d, �ּڰ�: %d, ��: %d\n", max, min, sum);


	return 0;
}
*/