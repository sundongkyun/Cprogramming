/*
#include <stdio.h>

int main(void) {
	int score[5][5];
	int psum = 0, ssum = 0, tsum = 0;

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			printf("점수 입력: ");
			scanf("%d", &score[i][j]);
		}
	}

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			psum += score[i][j];
			tsum += score[i][j];
		}
		score[i][4] = psum;
		psum = 0;
	}

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			ssum += score[j][i];
		}
		score[4][i] = ssum;
		ssum = 0;
	}

	score[4][4] = tsum;

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			printf("%d ", score[i][j]);
		}
		printf("\n");
	}


	return 0;
}
*/