#include <iostream>
using namespace std;



void Get_answer_podbor1(double A, double C) {
	if ((((-1) * C) / A) < 0) {
		cout << "Resheniya net" << endl;
	}
	else {
		double min = abs(0 - A * (-20) * (-20) - C);
		double x = -200;
		for (double i = -20; i < 20.01; i = i + 0.01) {
			double temp = abs(0 - A * (i) * (i)-C);
			if (temp < min) {
				min = temp;
				x = i;

			}
		}
		cout << "Odin is korney yravneniya: " << x << endl;
	}
}void Get_answer_podbor2(double B, double C) {
	double min = abs(0 - B * (-20) - C);
	double x = -20;
	for (double i = -20; i < 20.01; i = i + 0.01) {
		double temp = abs(0 - B * (i)-C);
		if (temp < min) {
			min = temp;
			x = i;
		}
	}
	cout << "Reshenie: " << x << endl;
}void Get_answer_podbor3(double A, double B, double C) {
	double D = B * B - 4 * A * C;
	if (D < 0) {
		cout << "Net Odin is korney yravneniya" << endl;
	}
	else {
		double min = abs(0 - A * (-20) * (-20) - B * (-20) - C);
		double x = -20;

		for (double i = -20; i < 20.01; i = i + 0.01) {
			double temp = abs(0 - A * (i) * (i)-B * i - C);
			if (temp < min) {
				min = temp;
				x = i;
			}
		}
		cout << "Odin is korney yravneniya: " << x << endl;
	}
}void Get_answer_podbor4(double A, double B) {
	double min = abs(0 - A * (-20) * (-20) - B * (-20));
	double x = -20;
	for (double i = -20; i < 20.01; i = i + 0.01) {
		if (i != 0) {
			double temp = abs(0 - A * i * i - B * (i));
			if (temp < min) {
				min = temp;
				x = i;
			}
		}
	}
	cout << "Odin is korney yravneniya: " << x << endl;
}int main() { setlocale(LC_ALL, "Russian");
	cout << "Ax^2 + Bx + c = 0" << endl;
	double A, B, C, x;
	cout << "Vvedite A B C: ";
	cin >> A >> B >> C;
	if ((A != 0) && (B != 0) && (C != 0)) { Get_answer_podbor3(A, B, C); }
	if ((A != 0) && (B != 0) && (C == 0)) { Get_answer_podbor4(A, B); }
	if ((A != 0) && (C != 0) && (B == 0)) { Get_answer_podbor1(A, C); }
	if ((B != 0) && (C != 0) && (A == 0)) { Get_answer_podbor2(B, C); }
	if ((A == 0) && (B == 0) && (C == 0)) { cout << "0 = 0"; }
	if ((A != 0) && (B == 0) && (C == 0)) { cout << "Reshenie: 0"; }
}