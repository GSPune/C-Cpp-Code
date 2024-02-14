#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;

class Triangle
{
    int a,b,c;
    double alpha,beta,gamma;
    public:
        Triangle(int x,int y,int z):a(x),b(y),c(z){
            cout << "x,y,z ->" << a << "," << b << "," << c << endl;
        }
        bool valid()
        {
            if ((a + b > c) && (a + c > b) && (b + c > a)){
                print_angles();
                return true;
            }
            else    
                return false;
        };
        void print_angles()
        { 
             gamma = acos((pow(b,2)+pow(a,2)-pow(c,2))/(2*a*b));
             beta = acos((pow(c,2)+pow(a,2)-pow(b,2))/(2*c*a));
             alpha = acos((pow(b,2)+pow(c,2)-pow(a,2))/(2*c*b));

             cout << "The internal angles of the triangle are ";
             cout <<  alpha << "," << beta << "," << gamma << endl;
        };
};

int main(void)
{
    int x,y,z;
    cin >> x >> y >> z;
    Triangle Obj1(x,y,z);
    return 0;
}