// Given the head of a singly linked list, reverse the list, and return the reversed list.


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

    for (ListNode *tmp = head; tmp != NULL; tmp = tmp->next)
    {
        cout << tmp->val << endl;
    }
    ListNode *temp1 = NULL, *temp2 = head->next;

    while(head->next != nullptr){
        head->next = temp1;
        temp1 = head;
        head = temp2;
        temp2 = head->next;
    }
    head -> next = temp1;

    for (ListNode *tmp = head; tmp != NULL; tmp = tmp->next)
    {
        cout << tmp->val << endl;
    }
    return 0;

}