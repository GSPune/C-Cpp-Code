// Div4 C. Clock and Strings-- @1
// Alice and Bob have four distinct integers a, b, c, d not more than 12. Alice ties a red string connecting a
//  and b, and Bob ties a blue string connecting c and d. Do the strings intersect? (The strings are straight line segments.)


#include <bits/stdc++.h>
using namespace std;

void check_intersection(int a,int b,int c,int d){
    //numbers to the left of a till b in L and to the right, in R!
    vector<int> L,R;
    int i = a+1;
    while(i % 12 != b % 12){
        if (i == 12)
            L.push_back(i);
        else
            L.push_back(i%12);
        i++;
    }

    int j = b+1;
    while(j % 12 != a % 12){
        if (j == 12)
            R.push_back(j);
        else
            R.push_back(j%12);
        j++;
    }

    for (const auto e1:L){
        for (const auto e2:R){
            // if (abs(e1 - e2) == abs(c - d))
            if((e1 == c && e2 == d) || (e1 == d && e2 == c)){
                cout << "YES" << endl;
                return;
            }
        }
    }
    cout << "NO" << endl;
}

int main(){
    int cases;
    int a,b,c,d;
    //Number of test cases
    cin >> cases;
    for (int i = 0; i < cases; i++){
        //take in the length of the string
        cin >> a >> b>>c>>d;
        check_intersection(a,b,c,d);
    }
    return 0;
}