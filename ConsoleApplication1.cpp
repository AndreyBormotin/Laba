// ConsoleApplication1.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <locale>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	double fut_1;
	int duim;
	const int Fut = 12;
	cout << "Введите ваш рост в дюймах:___\n";
	cin >> duim;
	fut_1 = double(duim) / Fut;
	cout << "Ваш рост в футах: " << fut_1 << "  Ваш рост в дюймах: " << duim << endl;
	system("pause");
	return 0;
}