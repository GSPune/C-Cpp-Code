// 237. Delete Node in a Linked List, Head is not given

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

void deleteNode(ListNode* node) {
    node->val = node->next->val;
    node->next = node->next->next;
}

int main(){
    ListNode *head;
    head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    ListNode *pos = head->next->next->next;
    head->next->next->next->next = new ListNode(5);


    deleteNode(pos);
    while(head != nullptr){
        ListNode *tmp = head->next;
        delete head;
        head = tmp;
    }
    return 0;
}