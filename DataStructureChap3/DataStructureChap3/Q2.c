#include <stdio.h>
#include "ArrayList.h"
#include "NameCard.h"

int main(void) {

	List list;
	LData pcard;
	ListInit(&list);

	LInsert(&list, MakeNameCard("Sun", "123-1234"));
	LInsert(&list, MakeNameCard("Kim", "234-2345"));
	LInsert(&list, MakeNameCard("Lee", "345-3456"));

	if (LFirst(&list, &pcard)) {
		if (! NameCompare(pcard, "Lee")) {
			ShowNameCardInfo(pcard);
		}

		while (LNext(&list, &pcard)) {
			if (!NameCompare(pcard, "Lee")) {
				ShowNameCardInfo(pcard);
			}
		}
	}
	printf("\n\n");
	if (LFirst(&list, &pcard)) {
		if (!NameCompare(pcard, "Lee")) {
			ChangePhoneNum(pcard, "678-6789");
		}

		while (LNext(&list, &pcard)) {
			if (!NameCompare(pcard, "Lee")) {
				ChangePhoneNum(pcard, "678-6789");
			}
		}
	}

	if (LFirst(&list, &pcard)) {
		if (!NameCompare(pcard, "Sun")) {
			LRemove(&list);
		}

		while (LNext(&list, &pcard)) {
			if (!NameCompare(pcard, "Sun")) {
				LRemove(&list);
			}
		}
	}

	if(LFirst(&list, &pcard)) {
		ShowNameCardInfo(pcard);

		while (LNext(&list, &pcard)) {
			ShowNameCardInfo(pcard);
		}
	}


	return 0;
}