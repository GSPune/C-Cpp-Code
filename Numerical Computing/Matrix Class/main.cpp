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
    T.display();
    // T.makeDiagonallyDominant();
    // T.guassJacobi();
    // T.guassSeidel();
    vector<Matrix> ans;
    ans = T.lowerUpperDecomposition();
    ans[0].display();
    ans[1].display();

    
    return 0;
}