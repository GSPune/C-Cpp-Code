//23. Merge k Sorted Lists
/*You are given an array of k linked-lists lists, each linked-list is sorted in ascending order.
Merge all the linked-lists into one sorted linked-list and return it.*/


#include <bits/stdc++.h>
using namespace std;

struct ListNode {
      int val;
      ListNode *next;
      //Member initialization in constructors
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode* mergeKLists(vector<ListNode*>& lists) {
       priority_queue<int,vector<int>,greater<int>> pq;
       for (auto L:lists){
        ListNode *cur = L;
        while(cur){
            pq.push(cur->val);
            cur = cur->next;
        } 
       }

       ListNode *d = new ListNode();
       ListNode *dI = d;

       while(!pq.empty()){
        dI->next = new ListNode(pq.top());
        dI = dI->next;
        pq.pop();
       }

       ListNode* nH = d->next;
       delete d;
       return nH;
}

int main(){
    ListNode *h1;
    h1 = new ListNode(1);
    h1->next = new ListNode(4);
    h1->next->next = new ListNode(5);

    ListNode *h2;
    h2 = new ListNode(1);
    h2->next = new ListNode(3);
    h2->next->next = new ListNode(4);


    ListNode *h3;
    h3 = new ListNode(2);
    h3->next = new ListNode(6);
    // h3->next->next = new ListNode(4);

    vector<ListNode*> l;
    l.push_back(h1);
    l.push_back(h2);
    l.push_back(h3);

    for(ListNode *tmp = mergeKLists(l); tmp != nullptr; tmp = tmp->next){
        cout << tmp->val << " ";
    }
    return 0;
}

