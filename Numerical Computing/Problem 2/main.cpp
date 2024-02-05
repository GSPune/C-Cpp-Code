#include <iostream>
#include <cmath>
using namespace std;
#include "bisection.hpp"

int main(void)
{
    BisectionMethod obj(pow(10,-6));//check agin with lower precisions
    obj.get_interval(0.0,1.0);
    obj.bisection();
    return 0;
}