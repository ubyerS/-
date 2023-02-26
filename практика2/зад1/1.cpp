#include "Triangle.h"
#include <iostream>
#include <cmath>
#include <locale>
using namespace std;

int main()
{
    setlocale(LC_ALL, "");
    Triangle mas[3];
    double a, b, c;
    for (int i = 0; i < 3; i++) {
        cout << "Введите a, b и c для треугольника " << i + 1 << " : " << endl;
        cin >> a >> b >> c;
        mas[i].set(a, b, c);
        if (!(mas[i].exst_tr())) {
            mas[i].show();
            cout << "Треугольник не существует" << endl;
            i--;
        }
    }
    for (int i = 0; i < 3; i++) {
        mas[i].show();
        cout << "Периметр: " << mas[i].perimetr() << endl;
        cout << "Площадь: " << mas[i].square() << endl;
    }
    return 0;
}