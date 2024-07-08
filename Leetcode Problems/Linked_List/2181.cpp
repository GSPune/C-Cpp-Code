/*Merge Nodes bwt 0s*/
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

ListNode* mergeNodes(ListNode* head) {
    head = head->next;
    if(head == nullptr)
        return head;
    ListNode *tmp = head;
    int csum = 0;
    while(tmp->val != 0){
        csum += tmp->val;
        tmp = tmp->next;
    }
    head->val = csum;
    head->next = mergeNodes(tmp);
    return head;
}

int main(){
    ListNode *head;
    head = new ListNode(0);
    head->next = new ListNode(3);
    head->next->next = new ListNode(1);
    head->next->next->next = new ListNode(0);
    head->next->next->next->next = new ListNode(4);
    head->next->next->next->next->next = new ListNode(5);
    head->next->next->next->next->next->next = new ListNode(0);
    

    ListNode *p = mergeNodes(head);
    for(ListNode *tmp = p; tmp != nullptr; tmp = tmp->next){
        cout << tmp->val << " ";
    }
    
    while (p)
    {
        ListNode *tmp = p->next;
        delete p;
        p = tmp;
    }
    
    return 0;
}

