#include <bits/stdc++.h>
#include <cmath>
using namespace std;
#include "MatrixClass.hpp"


Matrix::Matrix()
{
    mat = NULL;
    rows = cols = 0;
}

Matrix::Matrix(int r,int c) : rows(r), cols(c){
    //Dynamic Memory Allocation of 2d matrix;
    mat = new double* [rows]; //array of pointers
    for (int t = 0; t < rows; t++){
        mat[t] = new double[cols]; //each pointer pointing to a mem. block of size 'cols'
    }
    //Initialize with zeroes
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < cols; j++){
            mat[i][j] = 0;
        }
    }
}

void Matrix::display(){
    int r = this->rows, c = this->cols;
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < cols; j++){
            cout << mat[i][j] << "\t";}
        cout << endl;
    }
    cout << "\n";
}

void Matrix::readMatrixFromUser(){
    cout << "Enter the number of rows and cols";
    cin >> rows >> cols;
    
    //Dynamic Memory Allocation of 2d matrix;
    mat = new double* [rows]; //array of pointers
    for (int t = 0; t < rows; t++){
        mat[t] = new double[cols];
    }

    cout << "Enter the elements of the matrix one after another" << endl;
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < (cols) ; j++){
            cin >> mat[i][j];
        }
    }
}

bool Matrix::isDiagonallyDominant(){
    // |a_ii| >= Summation from j = 1 to n of |a_ij| s.t i != j
    if (mat != NULL){
        for (int r = 0; r < rows; r++){
            double sum = 0.0;
            for (int c = 0; c < cols - 1; (c == r-1) ? c += 2 : c++){
                if (r == c && c == 0)
                    continue;
                sum += fabs(mat[r][c]);
            }
            if (fabs(mat[r][r]) <= sum)
                return false;
            sum = 0.0;
        }
        return true;
    }
    return false;
}

bool Matrix::makeDiagonallyDominant(){
    for (int r = 0; r < rows; r++){
        //find a non DD row
            double s = 0.0;
            for (int c = 0; c < cols - 1; c++){
                if (r != c)
                    s += fabs(mat[r][c]);
            }
        if (s > fabs(mat[r][r])){
            int index = getDDRow(r);
            if (index != -1)
                swapRows(r,index);
            else
                return false;
       }
    }
    return true;
}

int Matrix::getDDRow(int row){
    for (int i = row + 1; i < rows; i++){
        double s = 0.0;
        for (int j = 0; j < cols-1; j++){
            //check for DD Row corresponding to {row}(th) column
            if (row != j)
                s += fabs(mat[i][j]);
        }
        if (fabs(mat[row][row]) >= s)
            return i;
    }
    cout << "No Diagonally Domininant row found after Row " << row << endl;
    return -1;
}

void Matrix::swapRows(int r1, int r2){
    for (int i = 0; i < cols; i++){
        swap(mat[r1][i],mat[r2][i]);
    }
}

void Matrix::guassJacobi(){
    if (!isDiagonallyDominant())
        //Try to make the matrix DD
        makeDiagonallyDominant();
    bool flag = true;
    int count = 0;
    double var[cols-1],prev[cols-1],sum = 0.0;
    for (int i = 0; i < cols-1; i++){
        // initailise the vallues of the variables to 0
        var[i] = prev[i] = 0;
    }

    // Condition : |P{n+1}-P{n}| <= Tolerance
    while(flag){
        for (int i = 0; i < cols-1; i++){
            // update previous values with current ones
            prev[i] = var[i];
        }

        for(int r = 0; r < rows; r++){
            double lhs = 0.0;
            for (int c = 0; c < cols-1; c++){
                if (r != c){
                    lhs += mat[r][c]*prev[c];
                }
            }
            lhs = (-1)*lhs + mat[r][cols-1];
            //current values of the variables
            var[r] = lhs/mat[r][r];
        }

        // for (int k = 0; k < cols-1; k++){
        //     sum += pow(prev[k]-var[k],2);
        // }

        sum = pow(prev[0]-var[0],2);
        // cout << sqrt(sum) << endl;
        // cout << TOLERANCE << endl << endl;

        if (sqrt(sum) <= TOLERANCE){
            flag = false;
        }
        count++;
    }
    cout << "Iterations for Jacobi ::" << count << endl;
    for (int i = 0; i < cols-1; i++){
            // print the values
            cout << var[i] << endl;
        }

}

void Matrix::guassSeidel(){
    if (!isDiagonallyDominant())
        //Try to make the matrix DD
        makeDiagonallyDominant();
    bool flag = true;
    int count = 0;
    double var[cols-1],prev,sum = 0.0;
    for (int i = 0; i < cols-1; i++){
        // initailise the vallues of the variables to 0
        var[i] = 0;
    }
    // Condition : |P{n+1}-P{n}| <= Tolerance
    while(flag){
        prev = var[0];
        for(int r = 0; r < rows; r++){
            double lhs = 0.0;
            for (int c = 0; c < cols-1; c++){
                if (r != c){
                    lhs += mat[r][c]*var[c];
                }
            }
            lhs = (-1)*lhs + mat[r][cols-1];
            //current values of the variables
            var[r] = lhs/mat[r][r];
        }

        // for (int k = 0; k < cols-1; k++){
        //     sum += pow(prev[k]-var[k],2);
        // }

        sum = pow(prev-var[0],2);
        // cout << sqrt(sum) << endl;
        // cout << TOLERANCE << endl << endl;

        if (sqrt(sum) <= TOLERANCE){
            flag = false;
        }
        count++;
    }
    cout << "Iterations for Seidel ::" << count << endl;
    for (int i = 0; i < cols-1; i++){
            // print the values
            cout << var[i] << endl;
        }
}

void Matrix::lowerUpperDecomposition(){
    Matrix M1(this->rows,this->cols),M2(this->rows,this->cols);
    //To use operator overloading here
    double **U = M1.mat;
    double **L = M2.mat;
    for (int i = 0; i < rows; i++){
        U[i][i] = 1;
    }

    for (int r = 0; r < rows; r++){
        for (int c = 0; c < cols; c++){
            //Go first across the 1st col of L
            cout << "test";
            if (c >= r){
                L[c][r] = computeL(mat,c,r);
            }
        }
        for (int c = 0;c < cols; c++){
            //Go across 1st row of U
            if (c > r){
                U[r][c] = computeU(mat,r,c);
            }
        }
    }
}

double computeL(double **mat,int row,int col){
//     // double ans,sum = 0.0;
//     // ans = mat[row][col];
//     // for (int k = 0; k < col; k++){
//     //     sum += L[row][k]*U[k][col];
//     // }
//     // ans -= sum;
//     // return ans;
 }

double computeU(double **mat,int row,int col){
//     // double ans,sum = 0.0;           
//     // ans = mat[row][col];
//     // for (int k = 0; k < row; k++){
//     //     sum += L[row][k]*U[k][col];
//     // }
//     // ans -= sum;
//     // return ans/L[row][row];
}

void Matrix::readMatrixViaFiles(string fileL, string fileR)
{
    ifstream fin;
    fin.open(fileL);
    fin >> rows >> cols;
    // cout << "Rows :: " << rows << "\nCols :: " << cols << endl;

    //Dynamic Memory Allocation of 2d matrix;
    mat = new double*[rows];
    for (int t = 0; t < rows; t++){
        mat[t] = new double[cols];
    }

    //Read Left Matrix File
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < (cols-1) ; j++){
            fin >> mat[i][j];
        }
    }

    fin.close();
    fin.open(fileR);

    //Read in Right Matrix
    for(int i = 0; i < rows; i++)
    {
        fin >> mat[i][cols - 1]; 
    }
    fin.close();
    display();
}

void Matrix::guassianElimination(){

    //Steps
    //1. Reduce to Lower Triangular

    for (int i = 0; i < rows; i++){
        double tmp = mat[i][i];
        //Make pivot 1 for row i
        for(int j = 0; j < cols; j++){
            if (mat[i][j] != 0){
            mat[i][j] /= tmp;}
         }
        
        //Row Transformations for all rows below pivot row i
         for(int k = i+1; k < rows ; k++){
            double t2 = mat[k][i];
            if (t2 == 0)
                continue;
            for (int p = i; p < cols; p++){
                //cout << "Row " << k << " - (" << t2 << ")*Row" << i << endl;
                mat[k][p] -= t2*mat[i][p]; 
            }
         }
         //printMatrix(mat,rows,cols);
     }
    cout << "Echelon Form:" << endl;
    // printMatrix(mat,rows,cols);
    display();

    //2. Back Substitution
    //double *ans = new double[cols-2];
    double ans[cols-2];
    double lhs = 0.0;
    ans[cols-2] = mat[rows-1][cols-1]; //value of last variable stored
    for (int r = rows - 2; r >= 0; r--){ //starting from 2nd last row
        for (int c = r + 1; c < cols - 1; c++){  //starting from the element just after pivot position
            lhs += mat[r][c] * ans[c]; 
        }
        ans[r] = (mat[r][cols - 1] - lhs)/mat[r][r];
        lhs = 0;
    }

    ofstream fout;
    fout.open("4_sol.txt");
    for (int k = 0; k < cols - 1; k++){
        fout << ans[k] << "\n";
    }
    fout.close();
    //delete[] ans;
}

Matrix::~Matrix(){
     //free allocated memory
    if (mat != NULL){
    for (int j = 0; j < rows; j++){
        delete[] mat[j];}
    delete[] mat;
    }
    
}

