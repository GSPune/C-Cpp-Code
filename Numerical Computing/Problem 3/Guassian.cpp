#include <bits/stdc++.h>
using namespace std;

int main()
{
    string fileL="L_3.txt";
    string fileR="R_3.txt";

    ifstream fin;
    fin.open(fileL);
    int rows,cols;
    fin >> rows >> cols;

    cout << "\n rows :: " << rows << "\n cols ::" << cols << endl;
    double mat[rows][cols];
    for (int i =0; i < rows; i++){
        for (int j =0; j < cols-1 ; j++){
            fin >> mat[i][j];
        }
    }

    fin.close();
    fin.open(fileR);

    for(int i = 0; i< rows; i++)
    {
        fin >> mat[i][cols - 1]; 
    }
    
    //Steps
    //1. Reduce to Lower Triangular
    //2. Back Substitution
    return 0;
}