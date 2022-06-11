
#include <iostream>
#include <math.h>
using namespace std;
void TrianglePS(double a, double& P, double& S) {
	P = 3.0 * a;
	S = a * a * sqrt(3) / 4;
}
int main() {
	system("chcp 1251");
	srand((int)time(0));
	double a, p, s;

	for (int i = 0; i < 3; i++) {
		a = rand() % 20 + 1;
		TrianglePS(a, p, s);
		cout << "№ Треугольника " << (i + 1) << endl;
		cout << "Размер а = " << a << endl;
		cout << "P= " << p << endl;
		cout << "S = " << s << endl;
		cout << endl;
	}
	return 0;
}