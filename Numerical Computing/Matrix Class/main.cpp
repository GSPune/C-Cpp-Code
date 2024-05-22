using namespace std;
#include "MatrixClass.hpp"
// #include "gnuplot-iostream.h"
//Testing ground!
int main(void)
{
    string L,R;
    // L = "TextFiles(Input Matrices)//testLU_L4.txt";
    // R = "TextFiles(Input Matrices)//testLU_R4.txt";
    L = "TextFiles(Input Matrices)//testC_L3.txt";
    R = "TextFiles(Input Matrices)//testC_R3.txt";
    Matrix Aug;
    Aug.readMatrixViaFiles(L,R);
    Aug.solveSystemViaLU();
    Aug.readMatrixViaFiles(L,R);
    Aug.solveSystemViaCholesky();
    
    // Aug.guassianElimination();

    // Matrix T;
    // T.readMatrixFromUser();
    // T.display();
    // vector<Matrix> ans;
    // ans = T.choleskyDecomposition();
    // ans[0].display();
    // ans[1].display();

    // Matrix T;
    // string L,R;
    // L = "TextFiles(Input Matrices)//testLU_L4.txt";
    // R = "TextFiles(Input Matrices)//testLU_R4.txt";
    // T.readMatrixViaFiles(L,R);
    // // T.display();
    // T.guassianElimination();

    // T.readMatrixViaFiles(L,R);
    // T.readMatrixFromUser();
    // // T.guassJacobi();
    // // T.guassSeidel();
    // vector<Matrix> ans;
    // ans = T.lowerUpperDecomposition();
    // ans[0].display();
    // ans[1].display();
    return 0;
}