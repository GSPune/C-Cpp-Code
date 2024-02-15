#include <iostream>
#include <cmath>
using namespace std;
#include "bisection.hpp"
#define pi 3.14159265
BisectionMethod::BisectionMethod(double tol)
{
    a = b = 0.0;
    delta = tol;
}

void BisectionMethod::find_interval()
{
    double x1 = 0,x2 = 1;
    while(x1 > -50 && x2 < 50)
    {
        if (f(x1) * f(x2) < 0)
        {
            a = x1;
            b = x2;
            cout << "Bracketting Interval found:(" <<a<<", "<<b<<")\n";
            return;
        }
        else
            x1--;x2++;
    }

    cout << " NO Valid Bracketing Interval found!" <<endl;
    exit(1);
}

void BisectionMethod::get_interval(double x1,double x2)
{
    if (f(x1) * f(x2) < 0)
    {
        a = x1;
        b = x2;
        return;
    }
    cout << "Invalid Bracketing Interval" <<endl;
    exit(1);
}

double BisectionMethod::f(double x)
{
    //return (2*pow(x,2) - 1);
    return (4*pow(x,3)-3*x);
    //return sin(x * (pi/2)) - x;
}

void BisectionMethod::bisection()
{
     // check this again
     double m,c;
     do
    {
        m = (a+b)/2;
        if (f(m) == 0)
        {
            cout << "The approximated root via Bisection Method is " << m << "!" << endl;
            exit(1);
        }

        c = f(b) - f(m);
        if (f(m)*f(a) < 0)
        {
            b = m;
        }
        else{
            a = m;
        }
        //c = (f(m) < 0) ? f(m)*(-1) : f(m);
        
        
    } while(fabs(c) > delta);
    cout << "The approximated root via Bisection Method is " << m << "!" << endl;
}
