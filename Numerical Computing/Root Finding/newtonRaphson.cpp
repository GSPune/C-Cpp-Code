#include "RF.hpp"

double newtonRaphson::f(double x){
    return 2*pow(x,2)-1;
}

double newtonRaphson::f_dash(double x){
    return 4*x;
}

void newtonRaphson::solve(){
    double x0 = 1;
    double prev = 1;
    do{
        prev = x0;
        if (isinf(f(x0)/f_dash(x0))){
            cout << "Try another guess value..denominator is infinity";
            exit(1);
        }
        x0 = x0 - (f(x0)/f_dash(x0));
    }while(fabs(x0-prev) > TOL);

    this->root = x0;
}

void newtonRaphson::displayRoot(){
    cout << "The approximated root via Newton Raphson Method is " << root << "!" << endl;
}