using namespace std;
#include "MatrixClass.hpp"
// #include "gnuplot-iostream.h"
// #include "guassianElimination.cpp"

int main(void)
{
    // string L,R;
    // L = "TextFiles(Input Matrices)//L_3.txt";
    // R = "TextFiles(Input Matrices)//R_3.txt";
    // Matrix Aug;

    // Aug.readMatrixViaFiles(L,R);
    // Aug.guassianElimination();

    Matrix T;
    T.readMatrixFromUser();
    T.display();
    // T.makeDiagonallyDominant();
    T.guassJacobi();
    T.guassSeidel();
    // vector<Matrix> ans;
    // ans = T.lowerUpperDecomposition();
    // ans[0].display();
    // ans[1].display();
    return 0;
}