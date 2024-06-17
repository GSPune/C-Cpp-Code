//142. Linked List Cycle II
//Given the head of a linked list, return the node where the cycle begins. 
//If there is no cycle, return null.

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


ListNode *detectCycle(ListNode *head) {
    ListNode *h = head, *t = head;
    while(h && h->next){
        h = h->next->next;
        t = t->next;
        if(h == t)
            break;
    }

     if (!h || !h->next)
        return nullptr;
        
    //move the hare to the head and move both pointers to the collision node 
    //with same speed.
    h = head;

    while(h != t){
        h = h->next;
        t = t->next;
    }

    return h;
}

int main(){
    ListNode *head;
    head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    ListNode *pos = head->next->next;
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);
    head->next->next->next->next->next = pos;

    cout << detectCycle(head)->val;
    return 0;
}