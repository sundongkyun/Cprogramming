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
		fputs("������ �̸� �Է�: ", stdout); scanf("%s", &em[i].name);
		fputs("�ֹε�Ϲ�ȣ �Է�: ", stdout); scanf("%s", &em[i].pnum);
		fputs("�޿����� �Է�: ", stdout); scanf("%d", &em[i].salary);
		printf("\n");
	}
	for (int j = 0; j < 3; j++) {
		fputs("������ �̸� :", stdout); fputs(em[j].name, stdout); printf("\n");
		fputs("�ֹε�Ϲ�ȣ :", stdout); fputs(em[j].pnum, stdout); printf("\n");
		fputs("�޿����� :", stdout); printf("%d\n", em[j].salary);
		printf("\n");
	}
	

	return 0;
}