#include "Integral.h"
#include <math.h>

//test function for integral
double test(double x) {
	return 3 * x * x * sin(x * x * x);
}