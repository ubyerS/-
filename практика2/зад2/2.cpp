#include <iostream>
#include <locale>
#include "circle.h"
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	setlocale(LC_NUMERIC, "en_EN.utf8");
	circle mas[3];

	for (int i = 0; i < 3; i++)
	{
		float r, x, y;
		cout << "координаты центра " << i + 1 << " окружности: ";
		cin >> r >> x >> y;
		mas[i].set_circle(r, x, y);
	}

	for (int i = 0; i < 3; i++)
	{
		float a, b, c;
		cout << "стороны " << i + 1 << "треугольника: ";
		cin >> a >> b >> c;
		if (mas[i].triangle_around(a, b, c)) cout << "описывается окружностью" << endl;
		else cout << "не описывается окружностью" << endl;
		if (mas[i].triangle_in(a, b, c)) cout << "вписывается в окружность" << endl;
		else cout << "не вписывается в окружность" << endl;
	}

	for (int i = 0; i < 3; i++) {
		float x, y;
		cout << "координаты центра " << i + 1 << " окружности: ";
		cin >> x >> y;
		if (mas[i].check_circle(x, y)) cout << "пересекается с " << i + 1 << " окружностью" << endl;
		else cout << "не пересекается с " << i + 1 << " окружностью" << endl;
	}
	return 0;
}