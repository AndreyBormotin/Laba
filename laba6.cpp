// laba4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.


#include <stdio.h>
#include <iostream>
#include <time.h>
#include <string>
const int n = 3;

struct scan_info
{
    char model[25];
    int price;
    double x_size;
    double y_size;
    int optr;
    int grey;
};

void main(void)
{
    scan_info scan1[n];

    FILE* file;
    char* OutFile = "file.txt";

    file = fopen(OutFile, "w");

    for (int i = 0; i < n; i++) {
        std::cout << "Vvedite Model scanera \n" << std::endl;
        std::cin >> scan1[i].model;
        fputs("scan1[i].model", file);

        std::cout << "Vvedite Stoimost scanera \n" << std::endl;
        std::cin >> scan1[i].price;
        fputs("scan1[i].price", file);

        std::cout << "Vvedite Gorizont o6JIact scanirovaniya \n" << std::endl;
        std::cin >> scan1[i].x_size;
        fputs("scan1[i].x_size", file);

        std::cout << "Vvedite VertikalHyIO o6JIact scanirovaniya \n" << std::endl;
        std::cin >> scan1[i].y_size;
        fputs("scan1[i].y_size", file);

        std::cout << "Vvedite Optichestkoe razreshenie \n" << std::endl;
        std::cin >> scan1[i].optr;
        fputs("scan1[i].optr", file);

        std::cout << "Vvedite Gradaciy serogo \n" << std::endl;
        std::cin >> scan1[i].grey;
        fputs("scan1[i].grey", file);

    }
    fclose(file);
    return;
}