#include "Board.hpp" 
#include <bits/stdc++.h>

using namespace std;

int main(){ 
    Board B1; 
    // B1.displayBoard();
    if (B1.Solve())
        B1.displayBoard();
    return 0;
}