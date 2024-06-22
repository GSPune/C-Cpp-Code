//21. Merge 2 Sorted Lists



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

 ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
    
    ListNode *d = new ListNode(), *cur1 = list1, *cur2 = list2;
    ListNode *dI = d;

    while(cur1 && cur2){
        dI->next = new ListNode(cur1->val);
        dI = dI->next;
        dI->next = new ListNode(cur2->val);
        dI = dI->next;
        cur1 = cur1->next;cur2 = cur2->next;
    }

    while(cur1){
        dI->next = new ListNode(cur1->val);
        dI = dI->next;
    }

    while(cur2){
        dI->next = new ListNode(cur2->val);
        dI = dI->next;
    }

    ListNode* nH = d->next;
    delete d;
    return nH; 
}

int main(){
    ListNode *h1;
    h1 = new ListNode(1);
    h1->next = new ListNode(2);
    h1->next->next = new ListNode(4);

    ListNode *h2;
    h2 = new ListNode(1);
    h2->next = new ListNode(3);
    h2->next->next = new ListNode(4);

    ListNode *p = mergeTwoLists(h1,h2);
    for(ListNode *tmp = p; tmp != nullptr; tmp = tmp->next){
        cout << tmp->val << " ";
    }

    ListNode* head = p;
    while(head != nullptr){
        ListNode *tmp = head->next;
        delete head;
        head = tmp;
    }
    return 0;
}

