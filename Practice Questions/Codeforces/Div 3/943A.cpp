// Div3 A.Maximize? -- @1
//You are given an integer x. Your task is to find any integer y (1≤y<x)
//such that gcd(x,y)+y is maximum possible.

#include <bits/stdc++.h>
using namespace std;

bool isPrime(int k){
	int count = 0;
	for (int i = 2; i < k;i++){
		if (k % i == 0)
            return false;
	}
	return true;
}

int gcd(int m, int n) {
    if (m < n)
        swap(m, n);

    int r = m % n;
    if (r == 0) // base case
        return n;
    else
        return gcd(n, r);
}

void maximise(int x){
    //kind of greedy approach?
    int y = x - 1,max = 0,v,t;
    if(isPrime(x))
        cout << y << endl;
    else{
        while(y > 0){
            v = gcd(x,y);
            if(v != 1){
                //cout << y << endl;
                if (v>max){
                    max = v;
                    t = y;
                }
            }
            y--;
        }
        cout << t << endl;
    }
}

int main(){
    int cases,x;
    //Number of test cases
    cin >> cases;
    for (int i = 0; i < cases; i++){
        //take in the length of the string
        cin >> x;
        maximise(x);
    }
    return 0;
}