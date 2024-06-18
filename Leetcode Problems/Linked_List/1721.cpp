//1721. Swapping Nodes in a Linked List
/*Return the head of the linked list after swapping the values of the kth node from 
the beginning and the kth node from the end*/

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


ListNode* swapNodes(ListNode* head, int k) {
    ListNode *f,*e;
    int size = 0;
    for(ListNode *tmp = head; tmp != nullptr; tmp = tmp->next){
        size++;
        if(size == k)
            f = tmp;
    }

    cout << size << endl;

    e = head;
    for(int i = 0; i < (size - k); ++i){
        e = e->next;
    }

    swap(f->val,e->val);
    return head;
}

int main(){
    ListNode *head;
    head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);

    // cout << swapNodes(head,2);

    for(ListNode *tmp = swapNodes(head,2); tmp != nullptr; tmp = tmp->next){
        cout << tmp->val << " ";
    }
    cout << endl;
    return 0;
}