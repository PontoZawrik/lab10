#include "main.h"

void task01() {
	double x;
	double* px = &x;
	double& rx = x;

	cout << &x << " " << px << " " << &rx << endl;

	cout << "¬ведите x:";
	cin >> x;

	cout << x << " " << *px << " " << rx << endl;

	x--;
	--*px;
	rx--;

	cout << x << " " << *px << " " << rx << endl;
	return;
}