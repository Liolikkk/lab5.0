// Lab 5_1
#include <iostream>
#include <cmath>

using namespace std;

double h(const double a, const double b); // прототип

int main()
 {
	double t, s;
	cout << "t = "; cin >> t;
	cout << "s = "; cin >> s;

	double c = pow(h(s, t * t), 3) + (pow(h(t, 1 + s * s), 2) / (1 + h(s * t, 1)));

	cout << "c = " << c << endl;

	return 0;
 }
double h(const double a, const double b) // визначення
 {
	return (a * a * sin(b) + b * b * cos(a));
 }
