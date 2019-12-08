// 1laba.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

using namespace std;

int main() {
    double Xn, Xk, dX;
    double a, b, c;
    cout << "Xn:";
    cin >> Xn;
    cout << "Xk:";
    cin >> Xk;
    cout << "Dx:";
    cin >> dX;
    cout << "a:";
    cin >> a;
    cout << "b:";
    cin >> b;
    cout << "c:";
    cin >> c;
    if ((int(a) | int(b)) & int(c) != 0) {
        for (double x = Xn; x <= Xk; x += dX) {
            double f;
            if (x < 0 && b != 0) f = a - x / (10 + b);
            else if (x > 0 && b == 0) f = (x - a) / (x - c);
            else f = 3 * x + 2 / c;
            cout << "x= " << x << "\tf = " << f << endl;
        }
    }
    else {
        for (double x = Xn; x <= Xk; x += dX) {
            int f;
            if (x < 0 && b != 0) f = a - x / (10 + b);
            else if (x > 0 && b == 0) f = (x - a) / (x - c);
            else f = 3 * x + 2 / c;
            cout << "x= " << x << "\tf = " << f << endl;
        }
    }
}