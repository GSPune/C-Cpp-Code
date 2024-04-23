/*Rudolf has a string s of length n. Rudolf considers the string s to be ugly if it contains 
the substring "pie" or the substring "map", otherwise the string s will be considered beautiful.*/

//For each test case, output a single integer — the minimum number of characters that need to be deleted to make the string s
//beautiful. If the string is initially beautiful, then output 0.

#include <bits/stdc++.h>
using namespace std;

void beautify_string(string,int);

int main()
{
    int cases,k;
    //Number of test cases
    cin >> cases;
    for (int i = 0; i < cases; i++){
        //take in the length of the string
        cin >> k;
        string s;
        cin >> s;
        beautify_string(s,k);
    }
    return 0;
}

void beautify_string(string s,int l){
    int count = 0,k = 0;
    for (int i = 0; i < (l - 2); i++){

        if (s[i] == 'm' && s[i+1] == 'a' && s[i+2] == 'p'){
            if ((i + 4) < l && (s[i+3] == 'i') && (s[i+4] == 'e')){
                count++;
                k = i + 4;
                i = k;
            }
            else{
                count++;
                k = i + 1;
                i = k;
            }}
        if (s[i] == 'p' && s[i+1] == 'i' && s[i + 2] == 'e' ){
                count++;
                k = i + 2;
                i = k;
            }
        }
    cout << count << endl;
 }
