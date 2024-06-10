#include <bits/stdc++.h>
using namespace std;

int f(int &x, int c){
    c--;
    if (c == 0) return 1;
    x++;
    return f(x,c) * x; //x changes as it is call by reference
}

bool MyCmp(string s1,string s2){
    if (s1.size() == s2.size())
        return (s1.compare(s2) < 0);
    return (s1.size() < s2.size());
}

int main(){
    int a = 4;
    vector <string> v1; 
    v1.push_back("This");
    v1.push_back("is");
    v1.push_back("my");
    v1.push_back("string");
    sort(v1.begin(),v1.end(),MyCmp);
    cout << f(a,a) << endl;

    for(const auto &e : v1)
        cout << e << " ";
    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     // Write C++ code here
//     for( ; ; ) //INFINITE LOOP
//     {}
//     std::cout << "Try programiz.pro";
//     return 0;
// }