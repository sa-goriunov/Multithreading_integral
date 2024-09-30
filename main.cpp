#include "Integral.h"
#include "math.h"
#include <iostream>
#include <chrono>

int main() {
	int n = 21;  //number of threads
	double time1, time2, step;
	std::cout << "Enter step:"; std::cin >> step; std::cout << std::endl; //choose the step for integral
	for (int i = 1; i < n; i++) {
		time1 = clock();
		std::cout << i << ") "<< integral(test, 0, pow(31 * 3.14159 * 0.5, 1/3), step, i) << ' '; //counting integral using different number of threads
		time2 = clock();
		std::cout << time2 - time1 << "\n"; //time of work with this number of threads
	}
	system("pause");
	return 0;
}