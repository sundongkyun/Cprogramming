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
	printf("�簢�� ����: %d\n",abs(((p->left).xpos - (p->right).xpos))*abs(((p->left).ypos - (p->right).ypos)));
}

void printPos(Rectangle * p) {
	printf("ù��° ��: {%d,%d}\n", (p->left).xpos, (p->left).ypos);
	printf("�ι�° ��: {%d,%d}\n", (p->left).xpos, (p->right).ypos);
	printf("����° ��: {%d,%d}\n", (p->right).xpos, (p->left).ypos);
	printf("�׹�° ��: {%d,%d}\n", (p->right).xpos, (p->right).ypos);
}

int main(void) {

	Rectangle r = { {0,0},{100,100} };
	printArea(&r);
	printPos(&r);

	return 0;
}
*/