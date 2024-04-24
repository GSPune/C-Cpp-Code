#include <bits/stdc++.h>
using namespace std;

class Matrix{
    double **mat;
    int rows,cols;
    public:
        //construct object(s)
        Matrix();

        //Free up memory
        ~Matrix();

        //Standard Operations
        void printMatrix(double**,int, int);
        void readMatrixViaFiles(string,string);
        void readMatrixFromUser();

        //Check for nature of matrix
        bool isNull();
        bool isSymmetric(Matrix);
        bool isDiagonallyDominant(Matrix);

        //Operations on matrices
        void addition(Matrix,Matrix);
        void substraction(Matrix,Matrix);
        void multiply(Matrix,Matrix);

        //Functions on augmented matrices
        void guassianElimination();
        void lowerUpperDecomposition();
        void choleskyDecomposition();
        void guassJacobi();
        void guassSeidel();

};