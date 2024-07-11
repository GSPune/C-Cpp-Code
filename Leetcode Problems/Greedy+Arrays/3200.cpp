#include <bits/stdc++.h>
using namespace std;


int maxHeightOfTriangle(int red, int blue) {
    int total = red + blue;
    // bool f1 = false, f2 = false;
    int i,j,r=red,b=blue;
    for(i = 1; i < (total); ++i){
        if(i > red || i > blue) break;

        //RED@TOP...check for blue
        if(i <= blue){
            if(i % 2 == 0){
                blue -= i;
            }
        }

        //check for red
        if(i <= red){
            if(i % 2 != 0){
                red -= i;
            }
        }
    }

    if(red >= 0 || blue >= 0){
        if((i) <= red && (i)%2!=0){
            i = i;
        }
        else if((i) <= blue && (i)%2==0){
            i = i;
        }
        else --i;
    }

    // f1 = f2 = 0;
    for(j = 1; j < (total); ++j){

        if(j > r || j > b) break;
        //Blue@TOP...check for red
        if(j <= r){
            if(j % 2 == 0){
                r -= j;
            }
        }

        //check for blue
        if(j <= b){
            if(j % 2 != 0){
                b -= j;
            }
        }

    }

    if(r >= 0 || b >= 0){
        if((j) <= r && (j)%2==0){
            j = j;
        }
        else if((j) <= b && (j)%2!=0){
            j = j;
        }
        else j--;
    }

    return max(i,j); 
}

// if(!f1)

int main(){
    // int r = 10, b = 1;
    int r = 1, b = 1;
    cout << maxHeightOfTriangle(r,b)<<endl;
    return 0;
}