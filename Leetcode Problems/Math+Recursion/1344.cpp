/*1344. Angle Between Hands of a Clock*/

#include <bits/stdc++.h>
using namespace std;

double angleClock(int hour, int minutes) {
    // double ans = (minutes/(double)60)*30 + abs((hour+1)%12-(minutes/(double)5))*30;
    double angle;
    double hourH = (minutes/(double)60);
    double minH = (minutes/(double)5);

    if(minH > hour){
        angle = (minH-hour)*30 - (hourH*30);
    }
    else if(hour > minH){
        angle = (hour-minH)*30 + (hourH*30);
    }
    else{
        angle = (hourH)*30;
    }
    return abs(min(angle,(360-angle)));
}

int main(){
    cout << angleClock(3,17) << endl;
    cout << angleClock(12,30) << endl;
    cout << angleClock(10,5) << endl;
    return 0;
}