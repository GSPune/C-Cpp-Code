using namespace std;
#include "MatrixClass.cpp"

int main(void)
{
    string L,R;
    Matrix Aug;
    cout << "Enter the files which contain the left" <<
    "and right partitions of augmented matrix one by one::" << endl;
    cin >> L;
    cin >> R;

    Aug.read_matrix(L,R);
    Aug.Guassian_elimination();
    return 0;
}