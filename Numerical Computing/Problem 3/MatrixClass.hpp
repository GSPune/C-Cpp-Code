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
        void read_matrix(string,string);

        //Operations on matrices
        void addition(Matrix,Matrix);
        void substraction(Matrix,Matrix);
        void multiply(Matrix,Matrix);

        //Functions on augmented matrices
        void Guassian_elimination();
};