// laba3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    srand(time(NULL));
    int i, j;
    const int SIZE=4;

    int a [SIZE][SIZE], b [SIZE];

    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) a[i][j] = -10 + rand() % 25;
    }
    for (int i = 0; i < SIZE; i++) {
        cout << endl;
        for (int j = 0; j < SIZE; j++) cout << a[i][j] << " ";
    }

    cout << "\n";
    int sum;
    for (int i = 0; i < SIZE; i++) {
        sum = 0;
        for (int j = 0; j < SIZE; j++) {
            if (a[j][i] > 0) {
                sum += a[j][i];
            }
            else {
                sum = 0;
                break;
            }
        }
        cout << "\nSUMMA " << i + 1 << " = " << sum;
    }


    cout << endl << endl;

    int msum = a[0][SIZE - 1];

    for (int i = 0; i < SIZE - 1; i++) {
        sum = 0;
        for (int j = i; j < SIZE; j++) {
            sum += a[j - i][j];
        }
        if (msum > sum) msum = sum;
    }

    for (int i = 0; i < SIZE - 1; i++) {
        sum = 0;
        for (int j = i; j < SIZE; j++) {
            sum += a[j][j - i];
        }
        if (msum > sum) msum = sum;
    }

    cout << " min sum " << msum << endl;

    cout << endl;
    return 0;
}