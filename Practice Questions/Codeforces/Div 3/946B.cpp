//B. Symmetric Encoding(Div3)
//Polycarp has a string s, which consists of lowercase Latin letters. He encodes this string!
//Write a program that performs decoding — that is, restores the original string s
//from the encoding result.


#include <bits/stdc++.h>
using namespace std;

void decoder(int length,string encoded){
    string copy = encoded;
    sort(encoded.begin(),encoded.end());
    unordered_map<char,char> P;
    string aux = "";
    set<char> auxiliaryChars;
    for(const auto &ch:encoded){
        auxiliaryChars.insert(ch);
    }
    for(const auto &t: auxiliaryChars)
        aux += t;

    int p = 0,q = aux.size()-1;
    // sort(aux.rbegin(),aux.rend());
    while(p <= q){
        P[aux[p]] = aux[q];
        P[aux[q]] = aux[p];
        p++;q--;
    }

    for (auto &c:copy)
        c = P[c];

    cout << copy << endl;
}

int main(){
    int cases,n;
    string enc;
    //Number of test cases
    cin >> cases;
    for (int i = 0; i < cases; i++){
        cin >> n >> enc;
        decoder(n,enc);
    }
    return 0;
}

// set<char>::iterator it1 = auxiliaryChars.begin();
// set<char>::iterator it2 = auxiliaryChars.end();
// it2--;
// set<char>::reverse_iterator it2 = auxiliaryChars.rbegin();
// set iterators are bi-directional and only support increment (++) and decrement (--) operations.
// while(it1 != it2 || it1 != (it2 + 1)){
//     P[*it1] = *it2;
//     it1++;
//     it2--; 
// }