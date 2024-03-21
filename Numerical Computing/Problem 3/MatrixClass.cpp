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
    int rows,cols;
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


