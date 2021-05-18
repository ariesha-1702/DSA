// https://practice.geeksforgeeks.org/problems/remove-duplicates-from-an-unsorted-linked-list/1#

#include<bits/stdc++.h>
using namespace std;

struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};


class Solution
{
    public:
    //Function to remove duplicates from unsorted linked list.
    Node * removeDuplicates( Node *head) 
    {
        int arr[100000]={0};
        if(head==NULL || head->next==NULL) return head;
    
        Node *prev=head,*curr=head->next;
        arr[head->data]=1;
        while(curr!=NULL)
        {
            if(arr[curr->data]) 
            {
                curr=curr->next;
                prev->next=curr;
            }
            else
            {
                arr[curr->data]=1;
                prev=prev->next;
                curr=curr->next;
            }
        }
        return head;
    }
};
