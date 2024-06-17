//234.Palindrome Linked List

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

//without storing any values ..O(3n) = O(n)
bool isPalindrome(ListNode* head) {
    vector<int> values;
    int k = 0;
    for(ListNode *tmp = head; tmp != NULL; tmp = tmp->next){
        values.push_back(tmp->val);
    }

    ListNode *prev = NULL, *nt = NULL , *cur = head;

    while(cur != nullptr){
        nt = cur->next;
        cur->next = prev;
        prev = cur;
        cur = nt;
    }
    head = prev;

    for(ListNode *tmp = head; tmp != NULL; tmp = tmp->next){
        if(values[k] != tmp->val)
            return false;
        k++;
    }
    return true;
}

int main(){
    ListNode *head;
    head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(2);
    head->next->next->next = new ListNode(1);

    cout << isPalindrome(head);
    return 0;
}