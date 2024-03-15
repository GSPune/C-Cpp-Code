#include <bits/stdc++.h>
using namespace std;

void printMatrix(double **mat,int rows,int cols)
{
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < cols; j++){
            cout << mat[i][j] << "\t";}
        cout << endl;
    }
    cout << "\n";
}

int main()
{
    string fileL="L_3.txt";
    string fileR="R_3.txt";

    ifstream fin;
    fin.open(fileL);
    int rows,cols;
    fin >> rows >> cols;

    cout << "Rows :: " << rows << "\nCols :: " << cols << endl;
    cout << setprecision(2);

    //Dyanmic Allocation;
    double **mat = new double* [rows];
    for (int t = 0; t < rows; t++){
        mat[t] = new double[cols];
    }


    for (int i =0; i < rows; i++){
        for (int j =0; j < (cols-1) ; j++){
            fin >> mat[i][j];
        }
    }

    fin.close();
    fin.open(fileR);

    for(int i = 0; i< rows; i++)
    {
        fin >> mat[i][cols - 1]; 
    }
    
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < cols; j++){
            cout << mat[i][j] << "   ";}
        cout << endl;
    }
    cout << "\n";
    //Steps
    //1. Reduce to Lower Triangular

    for (int i = 0; i < rows; i++){
        int tmp = mat[i][i];
        for(int j = 0; j < cols; j++){
            if (mat[i][j] != 0){
            mat[i][j] /= tmp;}
         }

         for(int k = i+1; k < rows;k++){
            int t2 = mat[k][i];
            for (int p = i; p < cols; p++){
                mat[k][p] -= t2*mat[i][p]; 
            }
         }
     }

     for (int i = 0; i < rows; i++){
        for (int j = 0; j < cols; j++){
            cout << mat[i][j] << "\t";}
        cout << endl;
    }

    //2. Back Substitution
    double *ans = new double[cols-2];
    ans[cols-2] = mat[rows-1][cols-1];

    //free memory
    delete[] ans;

    for (int j = 0; j < rows; j++)
        delete mat[j];
    delete mat;
    return 0;
}