#include <bits/stdc++.h>
using namespace std;


int main(){
    string inp, order, piece;
    vector<double> num;
    cout << "Input: " ;
    getline(cin,inp);
    // reverse(inp.begin(),inp.end());
    stringstream st(inp);
    // cout << order <<endl;
    while(st >> piece){
        if (piece[0] == '-' || isdigit(piece[0]) || piece[0] == '+'){
            num.push_back(stod(piece));
        }
        else{
            order = piece;
            // cout<<order;
        }

    }
    if (order == "A")
        sort(num.begin(),num.end());
    if (order == "D")
        sort(num.rbegin(),num.rend());
    
    cout << "Output: ";
    for (const auto &e:num)
        cout << e << " ";
    
    cout << endl;
    return 0;
}