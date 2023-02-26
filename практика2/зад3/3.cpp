#include <iostream>
#include <locale>
#include "figure.h"
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	setlocale(LC_NUMERIC, "en_US.UTF-8");

	float x1, x2, x3, x4, y1, y2, y3, y4;
	cout << "Введите координаты точек фигуры(x1,x2,x3,x4,y1,y2,y3,y4): " << endl;
	cin >> x1 >> x2 >> x3 >> x4 >> y1 >> y2 >> y3 >> y4;
	figure f1(x1, x2, x3, x4, y1, y2, y3, y4);
	cin >> x1 >> x2 >> x3 >> x4 >> y1 >> y2 >> y3 >> y4;
	figure f2(x1, x2, x3, x4, y1, y2, y3, y4);
	cin >> x1 >> x2 >> x3 >> x4 >> y1 >> y2 >> y3 >> y4;
	figure f3(x1, x2, x3, x4, y1, y2, y3, y4);

	figure mas[] = { f1, f2, f3 };

	for (int i = 0; i < 3; i++)
	{
		printf("=== >>> Фигура %d <<< ===\n", i + 1);
		mas[i].show();
		if (mas[i].is_prug()) printf("прямоугольник\n");
		else printf("не прямоугольник\n");
		if (mas[i].is_square()) printf("квадрат\n");
		else printf("не квадрат\n");
		if (mas[i].is_romb()) printf("ромб\n");
		else printf("не ромб\n");
		if (mas[i].is_in_circle()) printf("можно вписать в окружность\n");
		else printf("нельзя вписать в окружность\n");
		if (mas[i].is_out_circle()) printf("можно описать окружностью\n");
		else printf("нельзя описать окружностью\n");
		printf("\n");
	}

	return 0;
}