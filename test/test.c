#include "ctest.h"
#include "fquad.h"

CTEST(testquad, quad){

	double a = 1,b = -2,c = 1;
	double x1, x2;
	quad(a, b, c ,&x1, &x2);

	ASSERT_DBL_NEAR(1, x1);
	ASSERT_DBL_NEAR(1, x2);
}
	
	
