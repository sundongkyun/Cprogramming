/*
#include <stdio.h>

int arrayRotation(int (*array)[4], int size) {
	int tempArray[4][4];
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			tempArray[j][size - 1 - i] = array[i][j];
		}
	}
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			array[i][j] = tempArray[i][j];
		}
	}

	return 0;
}

void printArray(int (*array)[4], int size) {
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			printf("%d ", array[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	printf("-------------------------------");
	printf("\n");
}

int main(void) {

	int array[4][4] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16 };
	int size = sizeof(array) / sizeof(array[0]);
	
	printArray(array, size);

	arrayRotation(array, size);
	printArray(array, size);

	arrayRotation(array, size);
	printArray(array, size);

	return 0;
}
*/