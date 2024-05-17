#include "MatrixClass.hpp"


double Matrix::getLii(int i, double** L){
    double sum = 0.0;
    for (int k = 0; k < i; k++){
        sum += pow(L[i][k],2);
    }
    return sqrt(mat[i][i] - sum);
}

double Matrix::getLij(int i, int j, double** L){
    double sum = 0.0;
    for (int k = 0; k < j; k++){
        sum += L[i][k]*L[j][k];
    }
    return (mat[i][j] - sum)/L[j][j];
}

vector<Matrix> Matrix::choleskyDecomposition(){
    vector<Matrix> Result;
    Matrix L1(this->rows,this->cols);
    Matrix L2(rows,cols);
    double** L = L1.mat;
    vector<vector<double>> T(rows,vector<double>(cols));
    if(!this->isSymmetric()){
        cout << "Matrix is not symmetric.We can't factorise via Cholesky Method!" <<endl;
        exit(0);
        // return;
    }

    for(int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++){
            //go through each column and also compute separately for diagonal and 
            //lower non-diag elements
            if (j >= i){ //searching in lower triangular part only
                if (i == j)
                    L[j][j] = getLii(j,L);
                else    
                    L[j][i] = getLij(j,i,L);//going colwise
            }
        }
    }

    T = L1.transpose();
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < cols; j++){
            L2.mat[i][j] = T[i][j];
        }
    }
   Result.push_back(L1);
   Result.push_back(L2);
   return Result; 
}