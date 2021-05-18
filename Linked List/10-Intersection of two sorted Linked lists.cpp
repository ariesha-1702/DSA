// https://practice.geeksforgeeks.org/problems/intersection-of-two-sorted-linked-lists/1


#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *next;
    Node(int val)
    {
        data=val;
        next=NULL;
    }
};

Node* findIntersection(Node* head1, Node* head2)
{
    Node *ptr1=head1,*ptr2=head2,*head=NULL,*curr=NULL;
    while(ptr1 && ptr2)
    {
        if(ptr1->data==ptr2->data)
        {
            if(head==NULL)
            {
                Node *temp=new Node(ptr1->data);
                head=temp;
                curr=temp;
            }
            else
            {
                Node *temp=new Node(ptr1->data);
                curr->next=temp;
                curr=curr->next;
            }
            ptr1=ptr1->next; ptr2=ptr2->next;
        }
        else
        {
            if(ptr1->data<ptr2->data) ptr1=ptr1->next;
            else ptr2=ptr2->next;
        }
    }
    return head;
}