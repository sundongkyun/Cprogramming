/*
#include <stdio.h>

int SquareByValue(int num);
void SquareByReference(int * num);


int main(void) {
	int a = 9;
	int result;
	result = SquareByValue(a);
	printf("%d\n", result);
	SquareByReference(&a);
	printf("%d\n", a);
	return 0;
}

int SquareByValue(int num) {
	return  num * num;
}

void SquareByReference(int * num) {
	*num *= *num;
}
*/