// ConsoleApplication4.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include <iostream>
#include <locale>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	double fut, duim, funt;
	double kg, metr, imt;
	const int Fut = 12;
	const double k = 2.2;
	const double m = 0.0254;
	cout << "������� ��� ���� � ������ � ����� � ��� � ������:___\n";
	cin >> duim;
	cin >> fut;
	cin >> funt;
	metr = m*((fut*Fut) + duim);
	kg = funt*k;
	imt = kg / (metr*metr);
	cout << "��� ���: " << imt << endl;
	system("pause");
	return 0;
}