/*
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
	int user, computer, result = 1, win = 0, draw = 0, lose = 0;

	while (result) {
		printf("������ 1, ������ 2, ���� 3: ");
		scanf("%d", &user);
		srand((int)time(NULL));
		computer = rand() % 3 + 1;

		if (user == 1) {
			if (computer == 1) {
				printf("����� ���� ����, ��ǻ�ʹ� ���� ����, �����ϴ�.\n");
				draw++;
			}
			else if (computer == 2) {
				printf("����� ���� ����, ��ǻ�ʹ� ���� ����, �̰���ϴ�.\n");
				win++;
			}
			else {
				printf("����� ���� ����, ��ǻ�ʹ� �� ����, �����ϴ�.\n");
				printf("GAME OVER.\n");
				lose++;
				break;
			}

		}
		else if (user == 2) {
			if (computer == 1) {
				printf("����� ���� ����, ��ǻ�ʹ� ���� ����, �����ϴ�.\n");
				printf("GAME OVER.\n");
				lose++;
				break;
			}
			else if (computer == 2) {
				printf("����� ���� ����, ��ǻ�ʹ� ���� ����, �����ϴ�.\n");
				draw++;
			}
			else {
				printf("����� ���� ����, ��ǻ�ʹ� �� ����, �̰���ϴ�.\n");
				win++;
			}

		}
		else if (user == 3) {
			if (computer == 1) {
				printf("����� �� ����, ��ǻ�ʹ� ���� ����, �̰���ϴ�.\n");
				win++;
			}
			else if (computer == 2) {
				printf("����� �� ����, ��ǻ�ʹ� ���� ����, �����ϴ�.\n");
				printf("GAME OVER.\n");
				lose++;
				break;
			}
			else {
				printf("����� �� ����, ��ǻ�ʹ� �� ����, �����ϴ�.\n");
				draw++;
			}

		}
		else {
			printf("�߸��Է��Ͽ����ϴ�. ���α׷��� �����մϴ�.\n");
			break;
		}
	}
	printf("���� ���: %d�� %d�� %d��", win, draw, lose);

	return 0;
}
*/