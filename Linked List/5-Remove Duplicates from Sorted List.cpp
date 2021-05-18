// https://leetcode.com/problems/remove-duplicates-from-sorted-list/

/*  Definition for singly-linked list */

#include<bits/stdc++.h>
using namespace std;
struct ListNode {
   int val;
   ListNode *next;
   ListNode() : val(0), next(nullptr) {}
   ListNode(int x) : val(x), next(nullptr) {}
   ListNode(int x, ListNode *next) : val(x), next(next) {}
};
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL || head->next==NULL) return head;
    
        ListNode *prev=head,*curr=head->next;
        while(curr!=NULL)
        {
            if(curr->val==prev->val) 
            {
                curr=curr->next;
                prev->next=curr;
            }
            else
            {
                prev=prev->next;
                curr=curr->next;
            }
        }
        return head;
    }
};