#include <iostream>
#include <cmath>
using namespace std;
#include "Complex.hpp"

int main(void)
{
    Complex a;
    a.set(2,4);
    a.print();
    Complex b;
    b.set(3,5);
    b.print();
    Complex c;
    c.mul(a,b);
    c.print();
    c.div(a,b);
    c.print();
    a.conjugate();
    c.conjugate();
    return 0;
}