#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main(void)
{
    int n;
    vector<int> flowerbed = {1,0,0,0,1};
    int size = flowerbed.size(), count = 0;
    cout << "Enter the number of flowers to be placed\n";
    cin >> n;
    
    for(int i = 0; i < size; i++)
    {
        if (i == 0)
        {
            if (flowerbed[i] == 0 && flowerbed[i + 1] == 0){
                flowerbed[i] = 1;count++;}
        }
        else if (i == size - 1)
        {
            if (flowerbed[i] == 0 && flowerbed[i - 1] == 0){
                flowerbed[i] = 1;count++;}
        }
        else
        {
            if(flowerbed[i] == 0 && flowerbed[i + 1] == 0 && flowerbed[i - 1] == 0)
            {
                flowerbed[i] = 1;count++;
            }
        }
    }
    if (count >= n)
        cout << "YES!..true\n";
    else
        cout << "false\n";

    return 0;
}