// ConsoleApplication1.cpp: ���������� ����� ����� ��� ����������� ����������.
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
	cout << "������� ��� ���� � ������:___\n";
	cin >> duim;
	fut_1 = double(duim) / Fut;
	cout << "��� ���� � �����: " << fut_1 << "  ��� ���� � ������: " << duim << endl;
	system("pause");
	return 0;
}