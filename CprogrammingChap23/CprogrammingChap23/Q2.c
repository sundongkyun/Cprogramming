/*
#include <stdio.h>
#include <math.h>


typedef struct {
	int xpos;
	int ypos;
} Point;

typedef struct {
	Point left;
	Point right;
} Rectangle;

void printArea(Rectangle * p) {
	printf("사각형 넓이: %d\n",abs(((p->left).xpos - (p->right).xpos))*abs(((p->left).ypos - (p->right).ypos)));
}

void printPos(Rectangle * p) {
	printf("첫번째 점: {%d,%d}\n", (p->left).xpos, (p->left).ypos);
	printf("두번째 점: {%d,%d}\n", (p->left).xpos, (p->right).ypos);
	printf("세번째 점: {%d,%d}\n", (p->right).xpos, (p->left).ypos);
	printf("네번째 점: {%d,%d}\n", (p->right).xpos, (p->right).ypos);
}

int main(void) {

	Rectangle r = { {0,0},{100,100} };
	printArea(&r);
	printPos(&r);

	return 0;
}
*/