#include <iostream>
using namespace std;
#include "Complex.hpp"

Complex::Complex()
{
    r = i = 0.0;
}

void Complex::print()
{
    cout << r << " + " << i << "i" << endl;
}

void Complex::set (double x, double y)
{
    r = x;
    i = y;
}

void Complex::add(Complex c1, Complex c2)
{
    r = c1.r + c2.r;
    i = c1.i + c2.i;
}
void Complex::sub(Complex c1, Complex c2)
{
    r = c1.r - c2.r;
    i = c1.i - c2.i;
}

void Complex::mul(Complex c1, Complex c2)
{
    r = (c1.r * c2.r) - (c1.i * c2.i);
    i = (c1.i * c2.r) + (c1.r * c2.i);
}

void Complex::div(Complex c1, Complex c2)
{
    
}