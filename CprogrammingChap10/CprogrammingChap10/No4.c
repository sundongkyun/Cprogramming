/*
#include <stdio.h>

int main(void) {

	int balance, bread = 700, snack = 500, coke = 400;

	printf("현재 당신이 소유하고 있는 금액: ");
	scanf("%d", &balance);

	for (int i = 1;i < balance / bread; i++) {
		for (int j = 1;j< balance / snack; j++) {
			for (int k = 1;k< balance / coke; k++) {
				if (balance == i*bread + j * snack + k * coke ) {
					printf("크림빵 %d개 새우깡 %d개 콜라 %d개\n",i,j,k);
				}
			}
		}
	}
	return 0;
}
*/