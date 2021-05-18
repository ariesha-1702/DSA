// https://leetcode.com/problems/rotate-list/

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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL) return NULL;
        int count=1;
        ListNode* temp=head;
        while(temp->next!=NULL){
            count++;
            temp=temp->next;
        }
        k=k%count;
        temp->next=head;
        for(int i=1;i<=count-k;i++){
            temp=temp->next;
        }
        head=temp->next;
        temp->next=NULL;
        return head;
    }
};