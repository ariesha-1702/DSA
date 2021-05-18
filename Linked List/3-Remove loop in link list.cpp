// https://practice.geeksforgeeks.org/problems/remove-loop-in-linked-list/1#

/* structure of linked list node */

#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node* next;
    
    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

class Solution
{
    public:
    
    //Function to remove a loop in the linked list.
    void removeLoop(Node* head)
    {
        if(head==NULL || head->next==NULL) return;
        
        Node *slow=head->next,*fast=head->next->next;
        Node *curr=slow;
        //Detecting cycle
        while (slow != fast) 
        {
          if (fast == NULL || fast->next == NULL) return;
          curr=fast->next;
          slow = slow->next;
          fast = fast->next->next;
        }
        
       
        // cycle exist
        slow=head;
        while(slow!=fast)
        {
            curr=fast;
            slow=slow->next;
            fast=fast->next;
        }
        curr->next=NULL;
    }
};