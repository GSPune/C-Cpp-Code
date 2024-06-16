// Given the head of a singly linked list, return the middle node of the linked list.

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
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);
    // head->next->next->next->next->next = new ListNode(6);

    ListNode* h = head, *t = head;
    
    while(h && h->next){
        h = h->next->next;
        t = t->next;
    }

    cout << t->val;
    // if(h->next == nullptr){
    //     cout << t->val;
    // }
    // else
    //   cout << t->next->val;
    
    //freeing nodes
    while(head != nullptr){
        ListNode *tmp = head->next;
        delete head;
        head = tmp;
    }
    return 0;

}


// int c = 0,d = 0;
//     for (ListNode *tmp = head; tmp != NULL; tmp = tmp->next)
//     {
//         c++;
//         // cout << tmp->val << endl;
//     }
    // cout << c << endl;

    // int k = ceil((double)c/2);
    // cout << k << endl;
    

    // for (t = head; t != NULL; t = t->next)
    // {
    //     d++;
    //     if (d == k){
    //         break;
    //     }
    //     // cout << tmp->val << endl;
    // }

    // ListNode *t = head;
    // // cout <<(c/2) << endl;
    // for (int k = 0; k < (c/2); k++){
    //     t = t->next;
    // }
    // cout << t -> val;