/*846.Hand of Straights
Alice has some number of cards and she wants to rearrange the cards into groups so that 
each group is of size groupSize, and consists of groupSize consecutive cards.*/

#include<bits/stdc++.h>
using namespace std;

//Approach using a map! O(n*log(n))
bool isNStraightHand(vector<int>& hand, int groupSize) {
    int handSize = hand.size();

    if (handSize % groupSize != 0) {
        return false;
    }

    // Map to store the count of each card value
    map<int, int> cardCount;
    for (int i = 0; i < handSize; i++) {
        cardCount[hand[i]]++;
    }

    // Process the cards until the map is empty
    while (!cardCount.empty()) {
        // Get the smallest card value
        int currentCard = cardCount.begin()->first;
        // Check each consecutive sequence of groupSize cards
        for (int i = 0; i < groupSize; i++) {
            // If a card is missing or has exhausted its occurrences
            if (cardCount[currentCard + i] == 0) {
                return false;
            }
            cardCount[currentCard + i]--;
            if (cardCount[currentCard + i] < 1) {
                // Remove the card value if its occurrences are exhausted
                cardCount.erase(currentCard + i);
            }
        }
    }

    return true;
}

int main(){
    // vector<int> h = {1,2,3,6,2,3,4,7,8};
    vector<int> h = {1,2,3,6,2,3,5,7,8};
    // vector<int> h2 = {6,6,6,7,5,5,6,5};
    int groupSize = 3;
    int gs = 8;
    cout << bool(isNStraightHand(h,groupSize)) << endl;
    return 0;
}


// bool isNStraightHand(vector<int>& hand, int groupSize) {
//         int size = hand.size();
//         if (size % groupSize != 0)
//             return false;
//         if (groupSize == 1)
//             return true;
//         sort(hand.begin(), hand.end());
//         while (size > 0) {
//             vector<int>::iterator iter = hand.begin();
//             int count = 0;
//             while (count < groupSize) {
//                 if ((iter + 1) != hand.end()) {
//                     if (*(iter + 1) - *(iter) == 1) {
//                         if ((groupSize - count) == 2) {
//                             iter = hand.erase(iter);
//                             iter = hand.erase(iter);
//                             count += 2;
//                         } 
//                         else{
//                             iter = hand.erase(iter);
//                             count++;
//                         }
//                     } 
//                     else if (*(iter) == *(iter + 1)) {
//                         iter++;
//                     } 
//                     else {
//                         return false;
//                     }
//                 } 
//                 else {
//                     if (hand.size() == 1) {
//                         hand.erase(iter);
//                         count++;
//                     } 
//                     else
//                         return false;
//                 }
//         }
//         size = hand.size();
//     }
//     return true;
// }