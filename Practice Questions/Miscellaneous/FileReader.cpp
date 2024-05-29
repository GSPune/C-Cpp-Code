#include <bits/stdc++.h>
using namespace std;

int main(){
    int clines,cwrds,chars,sen;
    clines = cwrds = chars = sen = 0;
    ifstream fin;
    fin.open("testFile.txt");
    if (!fin){
        cout << "Unable to open file ... ERROR!" << endl;
        return -1;
    }
    string line;
    while(getline(fin,line)){
        clines++;
        chars += int(line.size());
        for (int i = 0; i < line.size(); i++){
            if(line[i] == '.')
            {
                sen++;
            }
        }
    } 
    cout << "Output: " << endl;
    cout << "number of lines: " << clines << endl;
    cout << "number of chars: " << chars+1 <<endl;  
    cout << "number of sentences: " << sen << endl;

}