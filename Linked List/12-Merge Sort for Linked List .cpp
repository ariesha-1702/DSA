// https://practice.geeksforgeeks.org/problems/sort-a-linked-list/1#

#include<bits/stdc++.h>
using namespace std;

struct Node 
{
    int data;
    struct Node* next;
    Node(int x) { data = x;  next = NULL; }
};

class Solution{
  public:
  
    void mergeSorting(Node **head)
    {
        Node *curr = *head;
        Node *first;
        Node *second;
        if(!curr || !curr->next) return;
        
        middleNode(curr,&first,&second);
        mergeSorting(&first);
        mergeSorting(&second);
        *head=merge(first,second);
    }
  
    void middleNode(Node* curr,Node **first,Node **second) {
        
        Node *slow=curr;
        Node *fast=curr->next;
        
        while(fast)
        {
            fast=fast->next;
            if(fast)
            {
                fast=fast->next;
                slow=slow->next;
            }
        }
        *first=curr;
        *second=slow->next;
        slow->next=NULL;
    }
    
    Node* merge(Node* first,Node* second)
    {
        Node *answer=NULL;
        
        if(!first) return second;
        else if(!second) return first;
        
        if(first->data <= second->data)
        {
            answer=first;
            answer->next=merge(first->next,second);
        }
        else
        {
            answer=second;
            answer->next=merge(first,second->next);
        }
        return answer;
    }
    
    
    //Function to sort the given linked list using Merge Sort.
    Node* mergeSort(Node* head) {
        
        mergeSorting(&head);
        return head;
        
    }
};