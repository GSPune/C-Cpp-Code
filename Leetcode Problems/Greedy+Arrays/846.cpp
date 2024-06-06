/*846.Hand of Straights
Alice has some number of cards and she wants to rearrange the cards into groups so that 
each group is of size groupSize, and consists of groupSize consecutive cards.*/

#include<bits/stdc++.h>
using namespace std;

bool isNStraightHand(vector<int>& hand, int groupSize) {
        int size = hand.size();
        if (size % groupSize != 0)
            return false;
        if (groupSize == 1)
            return true;
        sort(hand.begin(), hand.end());
        while (size > 0) {
            vector<int>::iterator iter = hand.begin();
            int count = 0;
            while (count < groupSize) {
                if ((iter + 1) != hand.end()) {
                    if (*(iter + 1) - *(iter) == 1) {
                        if ((groupSize - count) == 2) {
                            iter = hand.erase(iter);
                            iter = hand.erase(iter);
                            count += 2;
                        } 
                        else{
                            iter = hand.erase(iter);
                            count++;
                        }
                    } 
                else if (*(iter) == *(iter + 1)) {
                        iter++;
                } 
                else {
                        return false;
                }
            } 
            else {
                // if(*(iter) > *(iter-1)){
                if (hand.size() == 1) {
                    hand.erase(iter);
                    count++;
                } else
                    return false;
             }
        }
            size = hand.size();
    }
        return true;
}

int main(){
    vector<int> h = {1,2,3,6,2,3,4,7,8};
    vector<int> h2 = {6,6,6,7,5,5,6,5};
    int groupSize = 3;
    int gs = 8;
    cout << bool(isNStraightHand(h,groupSize)) << endl;
    return 0;
}