#include <bits/stdc++.h>
using namespace std;

class RF{
    protected:
        double root, TOL;
    public:
        RF(){
            TOL = pow(10,-5);//default value
        };
        //RF(double T):TOL(T){};
        //an abstract base class
        virtual void solve() =0; //pure virtual function
};

class bisection: public RF{
    double a,b;
    public:
        bisection();
        void solve();
        void find_interval();
        void get_interval(double,double);
        double f(double);
        void displayRoot();
};

class newtonRaphson: public RF{
    public:
        // newtonRaphson();
        double f(double);
        double f_dash(double);
        void solve();
        void displayRoot();
};

class fixedPoint: public RF{
    double f();
    void displayRoot();
};