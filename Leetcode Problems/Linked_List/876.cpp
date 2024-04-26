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
    head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);

    int c = 0,d = 0;
    for (ListNode *tmp = head; tmp != NULL; tmp = tmp->next)
    {
        c++;
        // cout << tmp->val << endl;
    }

    int k = ceil((double)c/2);
    cout << k << endl;
    ListNode *t;
    for (t = head; t != NULL; t = t->next)
    {
        d++;
        if (d == k){
            break;
        }
        // cout << tmp->val << endl;
    }
    cout << t -> val;
    
    return 0;

}