#include <iostream>
#include "rational.h"
using namespace std;
int main()
{
	int N, x, a, b;
	cout << "Enter number of values: ";
	cin >> N;
	rational* A = new rational[N];
	for (int i = 0; i < N; i++)
	{
		int a, b;
		cin >> a >> b;
		A[i].set(a, b);
	}
	for (int i = 0; i < N; i++) {
		A[i].show();
		cout << endl;
	}
	rational sum;
	for (int i = 0; i < n; i++) {
		sum = sum + A[i];
	}
	cout << "sum: ";
	sum.show();
	cout << endl;

	rational diff = A[0] - A[1];
	cout << "dif: ";
	diff.show();
	cout << endl;

	cout << "++: ";
	A[0]++;
	A[0].show();
	cout << endl;

	cout << "==: ";
	if (A[0] > A[1]) cout << ">";
	else if (A[0] == A[1]) cout << "=";
	else cout << "<";

	A[0] = A[1];
	cout << endl << "=: ";
	A[0].show();
	cout << endl;

	delete[] A;
	system("PAUSE");
	return 0;
};

	