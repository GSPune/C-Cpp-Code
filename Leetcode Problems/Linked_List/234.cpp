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

bool isPalindrome(ListNode* head) {
    ListNode *tmp;
    string fn;
    long long count = 0,rnum = 0;
    for(tmp = head; tmp != nullptr; tmp = tmp->next){
        rnum += (tmp->val)*pow(10,count); 
        fn += to_string(tmp->val);
        count++;
     }

     return (rnum == stoll(fn));
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