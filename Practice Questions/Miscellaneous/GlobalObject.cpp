//Testing some OOPs concepts...with global objects,constructors and destructors
#include <bits/stdc++.h>
using namespace std;

class MSC{
    public:
        MSC()
        {
            cout << "MSc Sci. Comp" << endl;
        }

        MSC(string s){
            cout << s << endl;
        }

        ~MSC(){
            cout << "Goodbye" << endl;
        }

};

// MSC a;

//actual start of program is allocation for global objects
//main is the starting point and the ending point of the application
//actual end is destructor call at the end of the block
int main(){
    //Global object
    MSC a;
    {MSC b("Test");}
    //object is destroyed when the block is deleated
    cout << "Hello World" << endl;
    return 0;
}

