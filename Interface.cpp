#include "Integral.h"
#include <fstream>
#include <iostream>
#include <chrono>
using namespace std;

void interface() {
	cout << "Multithreading integral" << endl;
	int n = 6;  //number of threads
	double step;
	std::cout << "Enter step:"; std::cin >> step; std::cout << std::endl; //choose the step for integral
	//ofstream fout;
	//fout.open("integral.txt");
	for(int k = 0; k< 5; k++)
		for (int i = 1; i < n; i++) {
			auto time1 = chrono::high_resolution_clock::now();
			   integral(test, 0, pow(31 * 3.14159 * 0.5, 1.0/3), step, i) ; //counting integral using different number of threads
			auto time2 = chrono::high_resolution_clock::now();
			chrono::duration<double> duration = time2 - time1;
			//fout<< i << " " << duration.count() << "\n"; //time of work with this number of threads
			/*if (k == 0)*/ cout << i<< " " << duration.count() << " " << i * duration.count() << endl;
		}
	system("pause");
}