#include "Integral.h"
#include <math.h>

//test function for integral
double test(double x) {
	return 3 * pow(x, 2)* sin(pow(x, 3));
}