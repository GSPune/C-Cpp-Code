#include <iostream>
#include <cmath>
using namespace std;
#include "bisection.hpp"

BisectionMethod::BisectionMethod(double tol)
{
    a = b = 0.0;
    delta = tol;
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
}

void BisectionMethod::bisection()
{
     // check this again
     double m,c;
     do
    {
        m = (a+b)/2;
        if (f(m)*f(a) < 0)
        {
            b = m;
        }
        else{
            a = m;
        }
        c = (f(m) < 0) ? f(m)*(-1) : f(m);
        
    } while(c > delta);
    cout << "The approximated root via Bisection Method is " << m << "!" << endl;
}
