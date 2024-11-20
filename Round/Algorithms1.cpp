#include<iostream>
using namespace std;

double round(double x, int precision) {
	double du = x * pow(10, precision) - floor(x * pow(10, precision)); // du = 4.2565 * 10 - floor(4.2565 * 10) = 42.565 - 42 = 0.565
	if (du >= 0.5) {
		return floor(x * pow(10, precision) + 1) / pow(10, precision);
	}
	else {
		return floor(x * pow(10, precision) / pow(10, precision));
	}
}
