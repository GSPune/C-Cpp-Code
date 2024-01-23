#include <iostream>
using namespace std;
//Global
int c = 10;

int main(void)
{
    int c = 19;
    //local var value
    cout << c << endl;
    //global var value using :: operator
    cout << ::c << endl;
    return 0;
}