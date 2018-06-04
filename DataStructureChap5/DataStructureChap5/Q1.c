#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Employee.h"
#include "CLinkedList.h"

Employee * returnEmployee(List * list, char * name, int seq);
void ShowEmployee(Employee * em);

int main(void) {

	Employee * em;

	List list;
	ListInit(&list);

	em = (Employee *)malloc(sizeof(Employee));
	em->emNum = 1;
	strcpy(em->name, "Kim");
	LInsert(&list, em);

	em = (Employee *)malloc(sizeof(Employee));
	em->emNum = 2;
	strcpy(em->name, "Lee");
	LInsert(&list, em);

	em = (Employee *)malloc(sizeof(Employee));
	em->emNum = 3;
	strcpy(em->name, "Park");
	LInsert(&list, em);

	em = (Employee *)malloc(sizeof(Employee));
	em->emNum = 4;
	strcpy(em->name, "Choi");
	LInsert(&list, em);

	em = returnEmployee(&list, "Kim", 7);
	ShowEmployee(em);

	if (LFirst(&list, &em))
	{
		free(em);

		for (int i = 0; i<LCount(&list) - 1; i++)
		{
			if (LNext(&list, &em))
				free(em);
		}
	}
	return 0;
}

Employee * returnEmployee(List * list, char * name, int seq) {

	int i, num;
	Employee * em;

	num = LCount(list);

	LFirst(list, &em);

	if (strcmp(em->name, name) != 0) {
		for (i = 0; i < num - 1; i++) {
			LNext(list, &em);

			if (strcmp(em->name, name) == 0)
				break;
		}
		if (i >= num - 1)
			return NULL;
	}

	for (i = 0; i < seq; i++) {
		LNext(list, &em);
	}

	return em;
}

void ShowEmployee(Employee * em) {
	printf("이름: %s\n", em->name);
	printf("사번: %d\n", em->emNum);
}