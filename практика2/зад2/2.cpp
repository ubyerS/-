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
		cout << "���������� ������ " << i + 1 << " ����������: ";
		cin >> r >> x >> y;
		mas[i].set_circle(r, x, y);
	}

	for (int i = 0; i < 3; i++)
	{
		float a, b, c;
		cout << "������� " << i + 1 << "������������: ";
		cin >> a >> b >> c;
		if (mas[i].triangle_around(a, b, c)) cout << "����������� �����������" << endl;
		else cout << "�� ����������� �����������" << endl;
		if (mas[i].triangle_in(a, b, c)) cout << "����������� � ����������" << endl;
		else cout << "�� ����������� � ����������" << endl;
	}

	for (int i = 0; i < 3; i++) {
		float x, y;
		cout << "���������� ������ " << i + 1 << " ����������: ";
		cin >> x >> y;
		if (mas[i].check_circle(x, y)) cout << "������������ � " << i + 1 << " �����������" << endl;
		else cout << "�� ������������ � " << i + 1 << " �����������" << endl;
	}
	return 0;
}