/*
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
	int turn = 1, strike, ball;
	int computerNum[3], userNum[3];
	printf("GAME START!");
	printf("\n");
	srand((int)time(NULL));

	for (int i = 0; i < 3; i++) {
		computerNum[i] = rand() % 10;
		printf("%d\n", computerNum[i]);
	}

	while (1) {
		printf("3개의 숫자 선택: ");
		scanf("%d %d %d", &userNum[0], &userNum[1], &userNum[2]);
		for (int i = 0; i < 3; i++) {
			printf("%d\n", userNum[i]);
		}
		printf("\n");
		strike = 0;
		ball = 0;
		for (int k = 0; k < 3; k++) {
			for (int p = 0; p < 3; p++) {
				if (userNum[k] == computerNum[p]) {
					if (k == p) {
						strike++;
					}
					else {
						ball++;
					}
				}
			}
		}

		printf("%d번째 도전 결과: %d strike, %d ball!\n ", turn, strike, ball);
		if (strike == 3) {
			printf("Game Over!\n");
			break;
		}
		turn++;
	}

	return 0;
}
*/