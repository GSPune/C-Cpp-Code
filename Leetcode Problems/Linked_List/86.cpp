//86. Partition List
/*Given the head of a linked list and a value x, partition it such that all nodes less than x 
come before nodes greater than or equal to x.
You should preserve the original relative order of the nodes in each of the two partitions.*/

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

ListNode* partition(ListNode* head, int x) {
    //dummy node and iterator
    ListNode *d = new ListNode();
    ListNode *dI = d;

    for(ListNode *tmp = head; tmp != nullptr; tmp = tmp->next){
        if(tmp->val < x){
            dI->next = new ListNode(tmp->val);
            dI = dI->next;
        }
    }

    for(ListNode *tmp = head; tmp != nullptr; tmp = tmp->next){
        if(tmp->val >= x){
            dI->next = new ListNode(tmp->val);
            dI = dI->next;
        }
    }

    ListNode *newHead = d->next;
    delete d;
    return newHead;
}

int main(){
    ListNode *head;
    head = new ListNode(1);
    head->next = new ListNode(4);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(2);
    head->next->next->next->next = new ListNode(5);
    head->next->next->next->next->next = new ListNode(2);

    ListNode *c = partition(head,3);

    for(ListNode *tmp = c; tmp != nullptr; tmp = tmp->next){
        cout << tmp->val << " ";
    }
    
    while(c != nullptr){
        ListNode *tmp = c->next;
        delete c;
        c = tmp;
    }
    
    while(head != nullptr){
        ListNode *tmp = head->next;
        delete head;
        head = tmp;
    }
    return 0;
}