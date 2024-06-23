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
    //dummy nodes again
    ListNode *d = new ListNode();
    ListNode *dI = d;

    while(list1 && list2){
        if(list1->val < list2->val){
            dI->next = list1;
            dI = dI->next;
            list1 = list1->next;
        }
        else{
            dI->next = list2;
            dI = dI->next; 
            list2 = list2->next;
        }    
    }

    if(list1){
        dI->next = list1;
    }
    else{
        dI->next = list2;
    }

    ListNode* nH = d->next;
    delete d;
    return nH; 
}

int main(){
    ListNode *h1;
    h1 = new ListNode(1);
    h1->next = new ListNode(2);
    h1->next->next = new ListNode(3);

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

