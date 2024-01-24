#include <iostream>
using namespace std;
#include "Complex.hpp"

int main(void)
{
    Complex a;
    a.set(2,7);
    a.print();
    Complex b;
    b.set(3,5);
    b.print();
    Complex c;
    c.add(a,b);
    c.print();
    c.mul(a,b);
    c.print();
    return 0;
}