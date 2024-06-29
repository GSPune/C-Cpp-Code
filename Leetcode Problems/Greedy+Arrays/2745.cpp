#include <bits/stdc++.h>
using namespace std;

int longestString(int x, int y, int z) {
    int count = 0;
    if(x >= y){
        //start with ABs and then AAs and BBs
        while(z){
            count+=2;
            z--;
        }
        while(x && y){
            count+=4;
            x--;y--;
        }
        if(x){
            x--;count+=2;
        }
    }
    else{
       while(x && y){
            count+=4;
            x--;y--;
        }
        if(y){
            y--;count+=2;
        }
        while(z){
            count+=2;
            z--;
        }  
    }
    return count;
}

int main(){
    int x,y,z;
    cin >> x >> y >> z;

    return 0;
}