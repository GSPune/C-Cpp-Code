//2487. Remove Nodes From Linked List
/*Remove every node which has a node with a greater value anywhere to the right side of it.
Return the head of the modified linked list*/

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

ListNode* removeNodes(ListNode* head) {
    if(!head || !head->next)
        return head;

    stack<ListNode*> stk;
    ListNode *cur = head;
    ListNode *newHead = cur,*tmp = newHead;
    stk.push(cur);
    cur = cur->next;
    while(cur){
        ListNode *look = stk.top();
        // if(look->val > cur->val){
        //     stk.push(cur);
        // }
        // else{
        //     while(stk.size() != 0 && stk.top()->val < cur->val)
        //         stk.pop();
        // }

        if(look->val < cur->val){
            while(stk.size() != 0 && stk.top()->val < cur->val)
                stk.pop();
        }

        if(stk.size() == 0){
            //readjust the pointers first
            newHead = cur;
            tmp = newHead;
        }
        else{
            tmp = stk.top();
            //building links
            tmp->next = cur;
            tmp = tmp->next;
        }
        stk.push(cur);
        cur = cur->next;
    }
    return newHead;
}

int main(){
    ListNode *head;
    head = new ListNode(5);
    head->next = new ListNode(2);
    head->next->next = new ListNode(13);
    head->next->next->next = new ListNode(3);
    head->next->next->next->next = new ListNode(8);

    ListNode *p = removeNodes(head);
    for(ListNode *tmp = p; tmp != nullptr; tmp = tmp->next){
        cout << tmp->val << " ";
    }
    
    head = p;
    while(head != nullptr){
        ListNode *tmp = head->next;
        delete head;
        head = tmp;
    }
    return 0;
}