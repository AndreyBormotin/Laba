// ConsoleApplication3.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include <iostream>
#include <locale>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	double km, litr, rashod;
	cout << "������� ���������� � ���-�� ������������ �������:___\n";
	cin >> km;
	cin >> litr;
	rashod = 100 / km*litr;
		cout << "��� ������: " << litr << endl;
	system("pause");
	return 0;
}
