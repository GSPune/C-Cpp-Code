//24. Swap Nodes in Pairs   
/**/

//19. Remove Nth Node From End of List
/*Given the head of a linked list, remove the nth node from the end of the list and return its head.*/

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

ListNode* swapPairs(ListNode* head) {
    if(!head || !head->next)
        return head;
    ListNode *t1 = head, *t2 = head->next, *prev;   
    head = t2;

    //swap the first 2 nodes
    t1->next = t2->next;
    t2->next = t1;

    // prev = t1;
    // t1 = t1->next;
    // t2 = t2->next->next;

    while(t1->next && t1->next->next){
        //update the pointers
        //order matters
        prev = t1;
        t2 = t1->next->next;
        t1 = t1->next;

        //building links
        prev->next = t2;
        t1->next = t2->next;
        t2->next = t1;
    }

    return head;
}

int main(){
    ListNode *head;
    head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    // head->next->next->next->next = new ListNode(5);

    ListNode *p = swapPairs(head);
    for(ListNode *tmp = p; tmp != nullptr; tmp = tmp->next){
        cout << tmp->val << " ";
    }
    
    while (p)
    {
        ListNode *tmp = p->next;
        delete p;
        p = tmp;
    }
    

    while(head != nullptr){
        ListNode *tmp = head->next;
        delete head;
        head = tmp;
    }
    return 0;
}