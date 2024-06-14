#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    //O(nlogn)
    //Counting Sort 
    int minMovesToSeat(vector<int>& seats, vector<int>& students) {
        sort(seats.begin(),seats.end());
        sort(students.begin(),students.end());
        int sz = seats.size(), c = 0;
        for(int i = 0; i < sz; ++i){
            c += abs(seats[i] - students[i]);
        }

        return c;
    }
};