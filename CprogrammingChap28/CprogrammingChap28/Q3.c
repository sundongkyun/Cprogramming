/*
#include <stdio.h>

typedef struct cn {
	double real;
	double imagin;
}Cn;

int main(void) {

	Cn n1;
	printf("복소수 입력1[실수 허수]: ");
	scanf("%lf %lf", &n1.real, &n1.imagin);

	Cn n2;
	printf("복소수 입력2[실수 허수]: ");
	scanf("%lf %lf", &n2.real, &n2.imagin);

	Cn plus;
	plus.real = n1.real + n2.real;
	plus.imagin = n1.imagin + n2.imagin;

	Cn multi;
	multi.real = (n1.real * n2.real) - (n1.imagin * n2.imagin);
	multi.imagin = (n1.real * n2.imagin) + (n1.imagin * n2.real);

	printf("합의 결과] 실수: %lf, 허수: %lf\n", plus.real, plus.imagin);
	printf("곱의 결과] 실수: %lf, 허수: %lf\n", multi.real, multi.imagin);

	return 0;
}
*/