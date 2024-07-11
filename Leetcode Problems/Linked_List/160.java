//160. Intersection of Two Linked Lists
/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode(int x) {
 *         val = x;
 *         next = null;
 *     }
 * }
 */
import java.util.*;
public class Solution {
    public ListNode getIntersectionNode(ListNode headA, ListNode headB) {
        int m = 0,n = 0,d;
        ListNode t1 = headA,t2 = headB,p,q;
        while(t1.next != null){
            t1 = t1.next;
            m++;
        }
        while(t2.next != null){
            t2 = t2.next;
            n++;
        }

        d = Math.abs(m-n);
        System.out.println(d);
        if(m > n){
            //move pointer on larger ll i.e. headA by d
            p = headA;
            while(d != 0){
                p = p.next;
                d--;
            }
            q = headB;
        }
        else{
            //move pointer on headB by d
            p = headB;
            while(d != 0){
                p = p.next;
                d--;
            }
            q = headA;
        }

        while(p != q){
            p = p.next;
            q = q.next;
        }

        return p;
    }
}