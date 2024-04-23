using namespace std;
#include "MatrixClass.cpp"
// #include "gnuplot-iostream.h"


int main(void)
{
    string L,R;
    Matrix Aug;
    cout << "Enter the files which contain the left " <<
    "and right partitions of augmented matrix one by one::" << endl;
    cin >> L;
    cin >> R;

    Aug.readMatrix(L,R);
    Aug.guassianElimination();
    return 0;
}