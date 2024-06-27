//203. Remove Linked List Elements

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

ListNode* removeElements(ListNode* head, int val) {
    ListNode *d = new ListNode();
    ListNode *dI = d, *cur = head;

    while(cur){
        if(cur->val != val){
            dI->next = cur;
            dI = dI->next;
            cur = cur->next;
        }
        else{
            cur = cur->next;
        }
    }
    dI->next = cur;
    // dI = dI->next;

    //handling dummy part
    ListNode *nH = d->next;
    delete d;
    return nH;

    // ---------------------------------------------------
    // if(head == NULL)
    //     return nullptr;
    // head->next = removeElements(head->next,val);
    // return head->val == val? head->next : head;
}

int main(){
    ListNode *head;
    head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(6);
    head->next->next->next = new ListNode(3);
    head->next->next->next->next = new ListNode(6);
    

    ListNode *p = removeElements(head,6);
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