#include <bits/stdc++.h>
#include <cmath>
using namespace std;
#include "MatrixClass.hpp"

Matrix::Matrix()
{
    mat = NULL;
    rows = cols = 0;
}

void Matrix::printMatrix(double **mat,int rows,int cols){
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

    printMatrix(mat,rows,cols);
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
}

bool Matrix::makeDiagonallyDominant(){

}

void Matrix::guassJacobi(){
    if (!isDiagonallyDominant())
        //Try to make the matrix DD
        makeDiagonallyDominant();
    double ans[cols-1];
    for (int i = 0; i < cols-1; i++){
        ans[i] = 0;
    }
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
    printMatrix(mat,rows,cols);
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
    printMatrix(mat,rows,cols);

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

