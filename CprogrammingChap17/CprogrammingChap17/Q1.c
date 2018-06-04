/*
#include <stdio.h>

int MaxAndMin(int ** maxptr, int ** minptr, int * arr) {
	int * max, *min;
	
	max = min = &arr[0];

	for (int i = 0; i < 5; i++) {
		if (*max < arr[i]) {
			max = &arr[i];
		}
		if (*min > arr[i]) {
			min = &arr[i];
		}
	}

	*maxptr = max;
	*minptr = min;

	return 0;
}

int main(void) {
	int * maxPtr;
	int * minPtr;
	int arr[5] = { 3,5,1,9,4 };

	MaxAndMin(&maxPtr, &minPtr, arr);

	printf("%d, %d", *maxPtr, *minPtr);

	return 0;
}
*/