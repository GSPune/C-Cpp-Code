using namespace std;
#include "MatrixClass.hpp"
// #include "gnuplot-iostream.h"
//Testing ground!
int main(void)
{
//---------------------------------------Solving via LU Decomposition-----------------------------------------
    string L,R;
    L = "TextFiles(Input Matrices)//testLU_L4.txt";
    R = "TextFiles(Input Matrices)//testLU_R4.txt";
    Matrix Aug;

    Aug.readMatrixViaFiles(L,R);
    Matrix C(Aug.rows,Aug.cols-1);
    for (int i = 0; i < C.rows; i++){
        for (int j = 0; j < C.cols; j++){
            C.mat[i][j] = Aug.mat[i][j];
            // cout<<Aug.mat[i][j]<<" ";
        }
    }
    vector<Matrix> ans;
    ans = C.lowerUpperDecomposition();
    double** l = ans[1].mat; 
    double** u = ans[0].mat; 
    // ans[0].display();
    // ans[1].display();
    //Solve LZ=b where Z=UX
    double* Z = new double[Aug.cols-1];
    double* X = new double[Aug.cols-1];
    //Update Aug to L
    for (int i = 0; i < C.rows; i++){
        for (int j = 0; j < C.cols; j++){
            Aug.mat[i][j] = l[i][j];
            // cout<<Aug.mat[i][j]<<" ";
        }
    }

    Aug.forwardSubstitution(Aug.mat,Z);
    for (int i =0; i<Aug.cols-1;i++){
        cout << Z[i] << endl;
    }
    cout << endl;
    //Now solve for UX=Z
    //Update Aug to U -- 2 steps
    for(int j =0; j < Aug.cols-1; j++)
        Aug.mat[j][Aug.cols-1] = Z[j];

    for (int i = 0; i < C.rows; i++){
        for (int j = 0; j < C.cols; j++){
            Aug.mat[i][j] = u[i][j];
        }
    }
    Aug.backSubstitution(Aug.mat,X);
    for (int i =0; i<Aug.cols-1;i++){
        cout << X[i] << endl;
    }
    cout << endl;
//----------------------------------------Solving via LU Decomposition-----------------------------------------
    // Aug.guassianElimination();

    // Matrix T;
    // T.readMatrixFromUser();
    // T.display();
    // vector<Matrix> ans;
    // ans = T.choleskyDecomposition();
    // ans[0].display();
    // ans[1].display();

    Matrix T;
    string L,R;
    L = "TextFiles(Input Matrices)//L_3.txt";
    R = "TextFiles(Input Matrices)//R_3.txt";
    T.readMatrixViaFiles(L,R);
    T.guassJacobi();
    T.guassSeidel();
    // vector<Matrix> ans;
    // ans = T.lowerUpperDecomposition();
    // ans[0].display();
    // ans[1].display();
    return 0;
}