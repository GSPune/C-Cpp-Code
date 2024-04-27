#include <bits/stdc++.h>
using namespace std;
#define TOLERANCE pow(10,-5)
class Matrix{
    double **mat;
    int rows,cols;
    public:
        //construct object(s)
        Matrix();

        //Free up memory
        ~Matrix();

        //Standard Operations
        // void printMatrix(double**,int, int);
        void display();
        void readMatrixViaFiles(string,string);
        void readMatrixFromUser();

        //Check for nature of matrix
        bool isNull();
        bool isSymmetric(Matrix);
        bool isDiagonallyDominant();
        bool makeDiagonallyDominant();

        //helper functions
        int getDDRow(int);
        void swapRows(int,int);
        double computeL(double **,int,int);
        double computeU(double **,int,int);
        void backSubstituion();
        void forwardSubstitution();

        //Operations on matrices
        void addition(Matrix,Matrix);
        void substraction(Matrix,Matrix);
        void multiply(Matrix,Matrix);

        //Functions on augmented matrices
        void guassianElimination();
        void lowerUpperDecomposition(double**,double**);
        void choleskyDecomposition();
        void guassJacobi();
        void guassSeidel();

};