// You are given the head of a linked list. Delete the middle node, 
// and return the head of the modified linked list.

// Given the head of a singly linked list, return the middle node of the linked list.

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

int main(){
    ListNode *head;
    head = new ListNode(2);
    head->next = new ListNode(1);

    int c = 0,d = 0;
    for (ListNode *tmp = head; tmp != NULL; tmp = tmp->next)
    {
        c++;
        // cout << tmp->val << endl;
    }

    ListNode *t = head, *prev = nullptr;
    for (int k = 0; k < (c/2); k++){
        prev = t;
        t = t->next;
    }

    prev->next = t->next;
    delete t;
    // cout << prev->val << endl;
    // cout << t->val;
    
    //freeing nodes
    while(head != nullptr){
        ListNode *tmp = head->next;
        delete head;
        head = tmp;
    }
    return 0;

}