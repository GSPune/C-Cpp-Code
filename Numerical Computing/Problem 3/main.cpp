using namespace std;
#include "MatrixClass.cpp"
// #include "gnuplot-iostream.h"


int main(void)
{
    // string L,R;
    // Matrix Aug;
    // cout << "Enter the files which contain the left " <<
    // "and right partitions of augmented matrix one by one::" << endl;
    // cin >> L;
    // cin >> R;

    // Aug.readMatrixViaFiles(L,R);
    // Aug.guassianElimination();

    Matrix T;
    T.readMatrixFromUser();
    if (T.isDiagonallyDominant())
        cout << "Y" << endl;
    else
        cout << "N" << endl;
    return 0;
}