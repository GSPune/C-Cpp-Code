#include <bits/stdc++.h>
using namespace std;

class Matrix{
    double **mat;
    int rows,cols;
    public:
        Matrix();
        void printMatrix(double**,int, int);
        void read_matrix(string,string);
        void addition(Matrix,Matrix);
        void substraction(Matrix,Matrix);
        void multiply(Matrix,Matrix);
        void Guassian_elimination(Matrix);
};