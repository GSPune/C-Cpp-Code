#include <iostream>
#include <cmath>

using namespace std;
unsigned long long int fact(int);
/*namespace N
{
    typedef int n;
}*/
int main()
{
    int n = 1,p = 1;
    long double pmax = 0, max = 0.1;
    while (max >= pmax)
    {
        n++;
        if (n % 5 == 0)
        {
            p = n/5;
        }
        pmax = max;
        max = (long double)fact(n)/pow(10,p);
    }
    cout << "The limit reached is " << pmax << " for n equal to " << n << endl;

    float m = 1.0;
    long double pmin = 1.0, min = 1.0;
    while (min <= pmin)
    {
        m++;
        pmin = min;
        min = (long double)1/fact((int)m);
    }
    cout << "The limit reached is " << pmin << " for m equal to " << m << endl;
}

unsigned long long int fact(int k)
{
    unsigned long long int f = 1;
    for (unsigned long long int i = 1; i < k + 1; i++)
    {
        /*if (i % 5 == 0)
        {

        }*/
        f *= i;
    }
   return f;
}