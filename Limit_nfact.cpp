#include <iostream>

using namespace std;
int fact(int);
/*namespace N
{
    typedef int n;
}*/
int main()
{
    int n = 1, pmax = 1, max = 1;
    while (max >= pmax)
    {
        n++;
        pmax = max;
        max = fact(n);
    }
    cout << "The limit reached is " << pmax << " for n equal to " << n << endl;

    float m = 1.0, pmin = 1.0, min = 1.0;
    while (min <= pmin)
    {
        m++;
        pmin = min;
        min = (float)1/fact((int)m);
    }
    cout << "The limit reached is " << pmin << " for n equal to " << n << endl;
}

int fact(int k)
{
    int f = 1;
    for (int i = 1; i < k + 1; i++)
    {
        f *= i;
    }
    return f;
}