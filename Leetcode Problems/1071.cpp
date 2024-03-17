/*1071.
Given two strings str1 and str2, return the largest string x 
such that x divides both str1 and str2.*/
#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
using namespace std;

int gcd(int m,int n){
    if (m < n)
        swap(m,n);

    int r = m % n;
    if (r == 0)//base case
        return n;
    else
        return gcd(n,r);
};

int main(void)
{
    // string str1 = "ABABAB",str2 = "ABAB";
    string str1 = "ABCDEF",str2 = "ABC";
    int sz1 = str1.length(),sz2 = str2.length();
    if (str1.compare(str2) == 0){
        cout << str1;
        exit(0);}
    if (str1[0] != str2[0]){
        cout << "";exit(0);}
    int i = 0, j = 0; 
    string x,ans="";
    while (i < str1.length() && j < str2.length()){
        if (str1[i] == str2[j])
            x += str2[i];
        i++;j++;
    }
    int g = gcd(sz1,sz2);
    //cout << x << " & " << g << endl;
    if (g > x.length()){
        cout << "";exit(0);}

    for (int i = 0; i < g; i++)
        ans+=x[i];
    string check1 = "",check2 ="";
    for (int i = 0; i < (sz1/g); ++i)
    {
        check1+=ans;

    }

    for (j = 0;  j < (sz2/g); ++j)
    {
        check2+=ans;
    }

    if (check1.compare(str1) == 0 && check2.compare(str2) == 0)
        cout << ans << endl; 
    else
        cout << "" << endl;
    
    return 0;
}