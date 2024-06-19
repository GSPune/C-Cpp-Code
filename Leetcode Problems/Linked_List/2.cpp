//2. Add Two Numbers
/*Add the two numbers and return the sum as a linked list.*/

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

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    ListNode *d = new ListNode();
    ListNode *dI = d;
    int carry = 0;
    while(l1 && l2){
        int sum = l1->val + l2->val + carry;
        if(sum > 9){
            carry = sum/10;
            sum %= 10;   
        }
        else
            carry = 0;
        ListNode *tmp = new ListNode(sum);
        dI->next = tmp;
        dI = tmp;
        l1=l1->next;l2=l2->next; 
    }

    ListNode *check = NULL;
    if(l1)
        check = l1;
    else if(l2)
        check = l2;
    
    if(check){
        while(check){
            int sum = check->val + carry;
            if(sum > 9){
                carry = sum/10;
                sum %= 10;  
            }
            else
                carry = 0;
            ListNode *tmp = new ListNode(sum);
            dI->next = tmp;
            dI = tmp;
            check = check->next;
        }
    }

    if(carry){
        dI->next = new ListNode(carry);
        dI = dI->next;
    }

    //Handle the carry part
    ListNode *newHead = d->next;
    delete d;
    return newHead;
}

int main(){
    ListNode *l1;
    l1 = new ListNode(2);
    l1->next = new ListNode(4);
    l1->next->next = new ListNode(3);


    ListNode *l2;
    l2 = new ListNode(5);
    l2->next = new ListNode(6);
    l2->next->next = new ListNode(4);

    ListNode *c = addTwoNumbers(l1,l2);
    for(ListNode *tmp = c; tmp != nullptr; tmp = tmp->next){
        cout << tmp->val << " ";
    }

    while(c != nullptr){
        ListNode *tmp = c->next;
        delete c;
        c = tmp;
    }

    while(l1 != nullptr){
        ListNode *tmp = l1->next;
        delete l1;
        l1 = tmp;
    }

     while(l2 != nullptr){
        ListNode *tmp = l2->next;
        delete l2;
        l2 = tmp;
    }

    return 0;
}