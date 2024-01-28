#include <iostream>
#include <cmath>
using namespace std;
#include "Complex.hpp"

int main(void)
{
    Complex a;
    a.set(3,5);
    a.print();
    Complex b;
    b.set(6,10);
    b.print();
    Complex c;
    c.add(a,b);
    c.print();
    c.mul(a,b);
    c.print();
    c.sub(a,b);
    c.print();
    c.div(a,b);
    c.print();
    a.conjugate();
    cout << a.norm() << endl;
    cout << b.norm() << endl;
    cout << c.norm() << endl;
    return 0;
}