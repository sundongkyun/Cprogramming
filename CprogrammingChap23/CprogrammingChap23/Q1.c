/*
#include <stdio.h>

typedef struct point {
	int xpos;
	int ypos;
} Point;

void SwapPoint(Point * p, Point * q) {
	int t = p->xpos;
	p->xpos = q->xpos;
	q->xpos = t;

	t = p->ypos;
	p->ypos = q->ypos;
	q->ypos = t;
	
}
int main(void) {
	
	Point a = { 2,4 };
	Point b = { 5,7 };
	printf("%d %d %d %d\n", a.xpos, a.ypos, b.xpos, b.ypos);
	SwapPoint(&a, &b);
	printf("%d %d %d %d\n", a.xpos, a.ypos, b.xpos, b.ypos);

	return 0;
}
*/