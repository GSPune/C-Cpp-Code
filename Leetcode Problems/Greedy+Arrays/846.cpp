/*846.Hand of Straights
Alice has some number of cards and she wants to rearrange the cards into groups so that 
each group is of size groupSize, and consists of groupSize consecutive cards.*/

#include<bits/stdc++.h>
using namespace std;

bool isNStraightHand(vector<int>& hand, int groupSize) {
    bool flag = false;
    int size = hand.size();
    sort(hand.begin(),hand.end());
    while(size > 0){
        vector<int> :: iterator iter = hand.begin();
        int count = 0;
        while(count < groupSize){
            if((iter+1) != hand.end()){
                if(*(iter) < *(iter+1)){
                    iter = hand.erase(iter);
                    flag = true;
                    count++;
                }
                else if(*(iter) == *(iter+1)){
                    flag = false;
                    iter++;
                }
                else{
                    return false;
                }
            }
            else{
                // if(*(iter) > *(iter-1)){
                if(flag){
                    hand.erase(iter);
                    count++;
                }   
                else
                    return false;
            }
        }
        size = hand.size();
    }
    return true;
}

int main(){
    vector<int> h = {1,2,3,6,2,3,4,7,8};
    int groupSize = 3;
    cout << bool(isNStraightHand(h,groupSize)) << endl;
    return 0;
}