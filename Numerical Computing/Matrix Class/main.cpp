using namespace std;
// #include "MatrixClass.hpp"
// #include "gnuplot-iostream.h"
#include "MatrixClass.cpp"
// #include "guassianElimination.cpp"

int main(void)
{
    string L,R;
    L = "TextFiles(InputMatrices)//L_3.txt";
    R = "TextFiles(InputMatrices)//R_3.txt";
    Matrix Aug;

    Aug.readMatrixViaFiles(L,R);
    // Aug.display();
    Aug.guassianElimination();

    // Matrix T;
    // T.readMatrixFromUser();
    // T.display();
    // // T.makeDiagonallyDominant();
    // // T.guassJacobi();
    // // T.guassSeidel();
    // vector<Matrix> ans;
    // ans = T.lowerUpperDecomposition();
    // ans[0].display();
    // ans[1].display();
    return 0;
}