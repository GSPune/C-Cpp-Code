#include <bits/stdc++.h>
#include <cmath>
using namespace std;
#include "MatrixClass.hpp"

Matrix::Matrix()
{
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

void Matrix::read_matrix(string fileL, string fileR)
{
    ifstream fin;
    fin.open(fileL);
    fin >> rows >> cols;
    cout << "Rows :: " << rows << "\nCols :: " << cols << endl;

    //Dynamic Memory Allocation of 2d matrix;
    double **mat = new double*[rows];
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

void Matrix::Guassian_elimination(){

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
    cout << "Echelon Form ::" << endl;
    printMatrix(mat,rows,cols);

    //2. Back Substitution
    // double *ans = new double[cols-2];
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
}

Matrix::~Matrix(){
     //free allocated memory
    for (int j = 0; j < rows; j++){
        delete[] mat[j];}
    delete[] mat;

    // delete[] ans;
}

