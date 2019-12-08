// ConsoleApplication5.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <locale>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	cout << "Ваше имя: Андрей, ваш адрес: ул. Обухова, д.45 " << endl;
	system("pause");
	return 0;
}