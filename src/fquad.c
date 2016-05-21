#include <math.h>
#include <stdlib.h>
#include <stdio.h>


double quad (double a, double b, double c, double *x1, double *x2)
{
	double D;

		D = pow(b,2) - 4*a*c;
		
		if (D >= 0)
		{
		*x1 = (-b-sqrt(D)) / (2*a);
		*x2 = (-b+sqrt(D)) / (2*a);
		}
		else 
		{			
			printf("Действительных корней нет");
			return 0;
		}
	
}
