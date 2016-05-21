#include <stdio.h>
#include "fquad.h"
double quad(double a, double b, double c, double *x1, double *x2);

int main() {
	double a,b,c,x1,x2;
	printf("Введите коэффициенты уравнения");
	scanf("%lf%lf%lf",&a,&b,&c);
	quad(a,b,c, &x1, &x2);
	printf("%lf  %lf", x1,x2);
        return 0;
}
