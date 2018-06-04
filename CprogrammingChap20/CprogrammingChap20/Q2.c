/*
#include <stdio.h>

int main(void) {
	int num = 1, limit = 5, direction = 1;
	int row = 0, col = -1;
	int array[5][5];

	while (1) {
		for (int p = 1; p <= limit; p++) {
			col += direction;
			array[row][col] = num++;
		}

		limit--;
		if (limit < 0) {
			break;
		}

		for (int q = 1; q <= limit; q++) {
			row += direction;
			array[row][col] = num++;
		}
		direction = -direction;

	}

	for (int k = 0; k < 5; k++) {
		for (int l = 0; l < 5; l++) {
			printf("%d ", array[k][l]);
		}
		printf("\n");
	}

	return 0;
}
*/