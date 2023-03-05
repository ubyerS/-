#include "eq2.h"
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double a, b, c;
    cin >> a >> b >> c;
    eq2 exmpl(a, b, c);
    exmpl.find_X();
    cout << exmpl.find_Y(6);
    eq2 exmpl2(2, 4, 1);
    eq2 exmpl_sum = exmpl + exmpl2;
    cout << "exmpl = " << exmpl.get_a() << exmpl.get_b() << exmpl.get_c() << endl;
    cout << "exmpl2 = " << exmpl2.get_a() << exmpl2.get_b() << exmpl2.get_c() << endl;
    cout << "exmpl_sum = " << exmpl_sum.get_a() << exmpl_sum.get_b() << exmpl_sum.get_c() << endl;
    
    return 0;
}