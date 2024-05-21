#include "RF.hpp"

double newtonRaphson::f(double x){
    return 2*pow(x,2)-1;
}

double newtonRaphson::f_dash(double x){
    return 4*x;
}