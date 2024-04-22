#include <bits/stdc++.h>
using namespace std;
#include "Board.hpp" 
// #include "Board.cpp" 


int main(){ 
    Board B1; 
    // B1.displayBoard();
    if (B1.Solve())
        B1.displayBoard();
    else
        cout << "Not Solvable for N equal to " << B1.getN();
    return 0;
}