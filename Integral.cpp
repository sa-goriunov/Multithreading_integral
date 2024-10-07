#include "Integral.h"
#include <vector>

//integral
//counting integral of function f from low to high with step "step"
//using rectangle method and OpenMP for multithreading
//returns the Riemann sum of the function
double integral(double f(double), double low, double high, double step, int threads) { //
	//std::vector <double> x;
	//double tmp = low;  double high_ = high - step;
	/*while (tmp < high_) {
		x.push_back(tmp);
		tmp += step;
	}*/
	double integral = 0;
	int n = (int)((high - low) / step);
#pragma omp parallel num_threads(threads)
	{
#pragma omp for
		for (int i = 0; i < n; i++)
#pragma omp atomic
			integral += f(low + i * step);
	}
	integral *= step;
	integral += f(n*step) * (high - n*step);

	return integral;
}