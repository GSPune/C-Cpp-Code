//A. Phone Desktop (Div3)
//Rosie wants to place the application icons on the minimum number of screens.
//For each test case, output the minimal number of required screens on a separate line.


#include <bits/stdc++.h>
using namespace std;

void min_screens(int x,int y){
    int area = (x + (4 * y)),r,secondc;
    (area % 15 == 0) ? r = (area / 15) : r = (area / 15)+1;
    (y % 2 == 0) ? secondc = (y / 2) : secondc = (y / 2)+1;
    if (r < secondc)
        cout << secondc << endl;
    else
        cout << r << endl;
}

int main(){
    int cases,x,y;
    //Number of test cases
    cin >> cases;
    for (int i = 0; i < cases; i++){
        cin >> x >> y;
        min_screens(x,y);
    }
    return 0;
}