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
    delete[] A;
    system("PAUSE");
    return 0;
};
