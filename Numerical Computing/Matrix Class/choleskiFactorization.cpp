#include "MatrixClass.hpp"

void Matrix::choleskyDecomposition(){
    if(!this->isSymmetric())
        cout << "Matrix is not symmetric.We can't factorise via Cholesky Method!" <<endl;

    for(int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols-1; j++){
            if (i > j){}
        }
    }
    
}