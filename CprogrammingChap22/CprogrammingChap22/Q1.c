#include <stdio.h>

struct employee
{
	char name[20];
	char pnum[20];
	int salary;
};

int main(void) {
	struct employee em[3];

	for (int i = 0; i < 3; i++) {
		fputs("종업원 이름 입력: ", stdout); scanf("%s", &em[i].name);
		fputs("주민등록번호 입력: ", stdout); scanf("%s", &em[i].pnum);
		fputs("급여정보 입력: ", stdout); scanf("%d", &em[i].salary);
		printf("\n");
	}
	for (int j = 0; j < 3; j++) {
		fputs("종업원 이름 :", stdout); fputs(em[j].name, stdout); printf("\n");
		fputs("주민등록번호 :", stdout); fputs(em[j].pnum, stdout); printf("\n");
		fputs("급여정보 :", stdout); printf("%d\n", em[j].salary);
		printf("\n");
	}
	

	return 0;
}