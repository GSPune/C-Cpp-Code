#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main(void)
{
    int n;
    vector<int> flowerbed = {1};
    int size = flowerbed.size(), count = 0;
    cout << "Enter the number of flowers to be placed\n";
    cin >> n;
    if (size == 1)
    {
        bool res = (flowerbed[0] == 0) ? count++ >= n : count >= n;
        cout.setf(ios::boolalpha);
        cout << res << endl;
    }
    else
    {
        if (flowerbed[0] == 0 && flowerbed[1] == 0){
            flowerbed[0] = 1;count++;}

        if (flowerbed[size - 1] == 0 && flowerbed[size - 2] == 0){
            flowerbed[size - 1] = 1;count++;}

        for(int i = 0; i < size; i++)
        {
            if(flowerbed[i] == 0 && flowerbed[i + 1] == 0 && flowerbed[i - 1] == 0){
                flowerbed[i] = 1;count++;
            }
        }

        if (count >= n)
            cout << "YES!..true\n";
        else
            cout << "false\n";
    }
    return 0;
}