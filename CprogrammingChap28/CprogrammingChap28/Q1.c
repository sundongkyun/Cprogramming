/*
#include <stdio.h>

typedef struct book {
	char writer[30];
	char name[30];
	int page;
}Book;

int main(void) {
	Book books[3];

	printf("도서 정보 입력\n");
	for (int i = 0; i < 3; i++) {
		printf("저자: ");
		fgets(books[i].writer, sizeof(books[i].writer), stdin);

		printf("제목: ");
		fgets(books[i].name, sizeof(books[i].name), stdin);

		printf("페이지 수: ");
		scanf("%d", &books[i].page);
		getc(stdin);
	}
	printf("도서 정보 출력\n");
	for (int k = 0; k < 3; k++) {
		printf("저자: ");
		fputs(books[k].writer, stdout);

		printf("제목: ");
		fputs(books[k].name, stdout);

		printf("페이지 수: %d\n", books[k].page);
	}
	
	return 0;
}
*/