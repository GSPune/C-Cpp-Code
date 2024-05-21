#include "RF.hpp"

int main(){
    bisection Ob;
    Ob.find_interval();
    Ob.solve();
    newtonRaphson Ob2;
    Ob2.solve();
    Ob2.displayRoot();
    return 0;
}