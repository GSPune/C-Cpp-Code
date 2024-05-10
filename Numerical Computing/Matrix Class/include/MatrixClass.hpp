#include <bits/stdc++.h>
using namespace std;
#define TOLERANCE pow(10,-5)

class Matrix{
    double **mat;
    int rows,cols;
    public:
        //construct object(s)
        Matrix();
        Matrix(int,int);
        Matrix(const Matrix&);

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
        void transpose(double **);
        int getDDRow(int);
        void swapRows(int,int);
        double computeL(double **,double **,double **,int,int);
        double computeU(double **,double **,double **,int,int);

        // template<class T, std::size_t S>
        // void backSubstitution(T **,T(&) [S]);
        void backSubstitution(double **,double*);//size of ans array is not known untill runtime!
        void forwardSubstitution(double **,double*);

        //Operations on matrices
        void addition(Matrix,Matrix);
        void substraction(Matrix,Matrix);
        void multiply(Matrix,Matrix);

        //Functions on augmented matrices
        void guassianElimination();
        vector<Matrix> lowerUpperDecomposition();
        void choleskyDecomposition();
        void guassJacobi();
        void guassSeidel();

};