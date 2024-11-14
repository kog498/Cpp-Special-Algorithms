#include<iostream>

using namespace std;

void getInformation(double& a1, double& b1, double& c1, double& a2, double& b2, double& c2) {
	cout << "Enter the first equation: a1*x + b1*y = c1\n";
	cout << "a1 = "; cin >> a1;
	cout << "b1 = "; cin >> b1;
	cout << "c1 = "; cin >> c1;
	cout << "Enter the second equation: a2*x + b2*y = c2\n";
	cout << "a2 = "; cin >> a2;
	cout << "b2 = "; cin >> b2;
	cout << "c2 = "; cin >> c2;
	system("cls");
}

void findSolutions(double a1, double b1, double c1, double a2, double b2, double c2) {
	double y = (c2 - (a2 * c1) / a1) / (a2 * (-b1) / a1 + b2);
	double x = ((-b1) / a1) * y + c1 / a1;
	cout << "x = " << x << endl;
	cout << "y = " << y << endl;
}

void solveSimulEquation() {
	double a1, b1, c1, a2, b2, c2;
	getInformation(a1, b1, c1, a2, b2, c2);

	if (a1 / a2 != b1 / b2) {
		cout << "There is a unique solution!\n"; // unique solution: (x;y)
		findSolutions(a1, b1, c1, a2, b2, c2);
	}
	else if ((a1 / a2 == b1 / b2) && (b1 / b2 != c1 / c2)) {
		cout << "There is no solution!\n";
	}
	else {
		cout << "There are numerous unique solutions!\n";
	}
}

void solveSimulEquation(double a1, double b1, double c1, double a2, double b2, double c2) {

	if (a1 / a2 != b1 / b2) {
		cout << "There is a unique solution!\n"; // unique solution: (x;y)
		findSolutions(a1, b1, c1, a2, b2, c2);
	}
	else if ((a1 / a2 == b1 / b2) && (b1 / b2 != c1 / c2)) {
		cout << "There is no solution!\n";
	}
	else {
		cout << "There are numerous unique solutions!\n";
	}
}

int main() {
	solveSimulEquation();
	solveSimulEquation(4, 5, 3, 1, -3, 5);
	return 1;
}