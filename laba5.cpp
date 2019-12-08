// laba5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cstring>
#define M 15
using namespace std;

struct AEROFLOT {
    char kuda[M];
    int num;
    char type[M];
};

int main() {
    static int const N = 7;
    AEROFLOT fly[N];
    int i;
    for (i = 0; i < N; i++) {
        cout << "\n nomer reisa: "; cin >> fly[i].num;
        cout << "\n tipe samoleta "; cin >> fly[i].type;
        cout << "\n pynkt naznocheniya "; cin >> fly[i].kuda;
    }

    cout << "\n ________________________________________________________\n";
    for (i = 0; i < N; i++) {
        cout << fly[i].kuda << "    " << fly[i].num << "    " << fly[i].type << endl;

    }
    cout << "\n ________________________________________________________\n";

    char temp[M];
    int count;
    while (strcmp(temp, "exit")) {
        cout << "\n djelaemii tipe samoleta : "; cin >> temp;
        count = 0;
        for (i = 0; i < N; i++) {
            if (strcmp(fly[i].type, temp) == 0) {
                cout << endl << fly[i].kuda << "    " << fly[i].num << endl;
                count++;
            }
            else cout << "Net reisa";
        }
    }
}