// laba2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <locale> 


using namespace std;

#define SIZE 10

int main()
{
	srand(time(NULL));
	int a[SIZE];

	for (int i = 0; i < SIZE; i++) {
		a[i] = -10 + rand() % 20;
		cout << a[i] << "	";
	}
	cout << endl;

	int max = a[0];
	for (int i = 1; i < SIZE; i++) {
		if (a[i] > max) {
			max = a[i];
		}

	}
	cout << "max=" << max << "   ";

	int sum = 0;
	for (int i = 0; i < SIZE; i++) {
		sum += a[i];
	}
	cout << "sum = " << sum << endl;

	int ind = 0;
	int sss = 0;
	for (int i = SIZE - 1; i >= 0; i--) {
		if (a[i] > 0) {
			ind = i;
			sss = a[i];
			break;
		}
	}
	cout << endl;

	int a1;
	int b1;
	cout << "a1" << endl;
	cin >> a1;
	cout << "b1" << endl;
	cin >> b1;
	for (int i = 0; i < SIZE; i++) {

		if (a1 <= a[i] && b1 >= a[i]) {
			if (a[i] > 0) a[i] = 0;
		}
		if (a1 <= -a[i] && b1 >= -a[i]) {
			if (a[i] < 0) a[i] = 0;
		}


	}

	cout << "\n\n____________________________" << endl;
	for (int i = 0; i < SIZE; i++) cout << a[i] << "	";
	cout << endl;
	return 0;

}