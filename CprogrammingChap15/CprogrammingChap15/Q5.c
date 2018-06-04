/*
#include <stdio.h>

void DesSort(int * array, int len) {
	int temp;

	for (int i = 0; i < len-1; i++) {
		for (int j = 0 ; j < len- 1 - i; j++) {
			if (array[j+1] > array[j]) {
				temp = array[j+1];
				array[j+1] = array[j];
				array[j] = temp;
			}
		}
	}

	for (int k = 0; k < len; k++) {
		printf("%d", array[k]);
	}

}

int main(void) {
	int array[7];

	for (int i = 0; i < 7; i++) {
		printf("ют╥б: ");
		scanf("%d", &array[i]);
	}

	DesSort(array, sizeof(array)/sizeof(int));

	return 0;
}
*/