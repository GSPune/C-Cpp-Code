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

ListNode* removeNthFromEnd(ListNode* head, int n) {
    int size = 0, end;
    ListNode *tmp;
    for(tmp = head; tmp != nullptr; tmp = tmp->next){
        size++;
    }

    end = size - n;
    if(end == 0){
        head = head->next;
        return head;
    }

    tmp = head;
    for(int i = 1; i < end; ++i){
        tmp = tmp->next;
    }
    tmp->next = tmp->next->next;
    return head;
}

int main(){
    ListNode *head;
    head = new ListNode(1);
    head->next = new ListNode(2);
    // head->next->next = new ListNode(3);
    // head->next->next->next = new ListNode(4);
    // head->next->next->next->next = new ListNode(5);

    for(ListNode *tmp = removeNthFromEnd(head,1); tmp != nullptr; tmp = tmp->next){
        cout << tmp->val << " ";
    }
    
    while(head != nullptr){
        ListNode *tmp = head->next;
        delete head;
        head = tmp;
    }
    return 0;
}