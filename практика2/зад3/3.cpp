#include <iostream>
#include <locale>
#include "figure.h"
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	setlocale(LC_NUMERIC, "en_US.UTF-8");

	float x1, x2, x3, x4, y1, y2, y3, y4;
	cout << "������� ���������� ����� ������(x1,x2,x3,x4,y1,y2,y3,y4): " << endl;
	cin >> x1 >> x2 >> x3 >> x4 >> y1 >> y2 >> y3 >> y4;
	figure f1(x1, x2, x3, x4, y1, y2, y3, y4);
	cin >> x1 >> x2 >> x3 >> x4 >> y1 >> y2 >> y3 >> y4;
	figure f2(x1, x2, x3, x4, y1, y2, y3, y4);
	cin >> x1 >> x2 >> x3 >> x4 >> y1 >> y2 >> y3 >> y4;
	figure f3(x1, x2, x3, x4, y1, y2, y3, y4);

	figure mas[] = { f1, f2, f3 };

	for (int i = 0; i < 3; i++)
	{
		printf("=== >>> ������ %d <<< ===\n", i + 1);
		mas[i].show();
		if (mas[i].is_prug()) printf("�������������\n");
		else printf("�� �������������\n");
		if (mas[i].is_square()) printf("�������\n");
		else printf("�� �������\n");
		if (mas[i].is_romb()) printf("����\n");
		else printf("�� ����\n");
		if (mas[i].is_in_circle()) printf("����� ������� � ����������\n");
		else printf("������ ������� � ����������\n");
		if (mas[i].is_out_circle()) printf("����� ������� �����������\n");
		else printf("������ ������� �����������\n");
		printf("\n");
	}

	return 0;
}