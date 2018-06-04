/*
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
	int user, computer, result = 1, win = 0, draw = 0, lose = 0;

	while (result) {
		printf("바위는 1, 가위는 2, 보는 3: ");
		scanf("%d", &user);
		srand((int)time(NULL));
		computer = rand() % 3 + 1;

		if (user == 1) {
			if (computer == 1) {
				printf("당신은 바위 선택, 컴퓨터는 바위 선택, 비겼습니다.\n");
				draw++;
			}
			else if (computer == 2) {
				printf("당신은 바위 선택, 컴퓨터는 가위 선택, 이겼습니다.\n");
				win++;
			}
			else {
				printf("당신은 바위 선택, 컴퓨터는 보 선택, 졌습니다.\n");
				printf("GAME OVER.\n");
				lose++;
				break;
			}

		}
		else if (user == 2) {
			if (computer == 1) {
				printf("당신은 가위 선택, 컴퓨터는 바위 선택, 졌습니다.\n");
				printf("GAME OVER.\n");
				lose++;
				break;
			}
			else if (computer == 2) {
				printf("당신은 가위 선택, 컴퓨터는 가위 선택, 비겼습니다.\n");
				draw++;
			}
			else {
				printf("당신은 가위 선택, 컴퓨터는 보 선택, 이겼습니다.\n");
				win++;
			}

		}
		else if (user == 3) {
			if (computer == 1) {
				printf("당신은 보 선택, 컴퓨터는 바위 선택, 이겼습니다.\n");
				win++;
			}
			else if (computer == 2) {
				printf("당신은 보 선택, 컴퓨터는 가위 선택, 졌습니다.\n");
				printf("GAME OVER.\n");
				lose++;
				break;
			}
			else {
				printf("당신은 보 선택, 컴퓨터는 보 선택, 비겼습니다.\n");
				draw++;
			}

		}
		else {
			printf("잘못입력하였습니다. 프로그램을 종료합니다.\n");
			break;
		}
	}
	printf("최종 결과: %d승 %d무 %d패", win, draw, lose);

	return 0;
}
*/