#include <bits/stdc++.h>
using namespace std;

class RF{
    protected:
        double root, TOL;
    public:
        RF(){
            TOL = pow(10,-5);
        };
        RF(double TOL):TOL(TOL){};
        void solve();
};

class bisection: public RF{
    double f();
};

class newtonRaphson: public RF{
    double f();
};

class fixedPoint: public RF{
    double f();
};