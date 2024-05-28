#include "baseChange.cpp"

int main(){
    int n,k;
    cout << "Input: ";
    cin >> n >> k;
    baseChange o(n,k);
    o.convertNumber();
    o.print();
    return 0;
}