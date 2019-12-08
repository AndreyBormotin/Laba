// ConsoleApplication3.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <locale>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	double km, litr, rashod;
	cout << "Введите расстояние и кол-во потраченного топлива:___\n";
	cin >> km;
	cin >> litr;
	rashod = 100 / km*litr;
		cout << "Ваш расход: " << litr << endl;
	system("pause");
	return 0;
}
