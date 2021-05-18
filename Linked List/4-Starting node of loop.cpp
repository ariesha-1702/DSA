// https://leetcode.com/problems/linked-list-cycle-ii/

/* Definition for singly-linked list */

#include<bits/stdc++.h>
using namespace std;
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        
        if(head==NULL || head->next==NULL) return NULL;
        
        ListNode *slow=head->next,*fast=head->next->next;
        // Detecting cycle
        while (slow != fast) 
        {
          if (fast == NULL || fast->next == NULL) return NULL;
          slow = slow->next;
          fast = fast->next->next;
        }
        
        // cycle exist
        slow=head;
        while(slow!=fast)
        {
            slow=slow->next;
            fast=fast->next;
        }
        return slow;
    }
};

/* Distance traveled by fast pointer = 2 * (Distance traveled 
                                         by slow pointer)

(m + n*x + k) = 2*(m + n*y + k)

Note that before meeting the point shown above, fast
was moving at twice speed.

x -->  Number of complete cyclic rounds made by 
       fast pointer before they meet first time

y -->  Number of complete cyclic rounds made by 
       slow pointer before they meet first time
From the above equation, we can conclude below 

    m + k = (x-2y)*n

Which means m+k is a multiple of n.

So if we start moving both pointers again at the same speed such that one pointer (say slow) begins from 
the head node of the linked list and other pointers (say fast) begins from the meeting point. When the 
slow pointer reaches the beginning of the loop (has made m steps), the fast pointer would have made also 
moved m steps as they are now moving the same pace. Since m+k is a multiple of n and fast starts from k, 
they would meet at the beginning. Can they meet before also? No, because the slow pointer enters the 
cycle first time after m steps. */