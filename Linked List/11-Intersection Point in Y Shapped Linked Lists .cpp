// https://practice.geeksforgeeks.org/problems/intersection-point-in-y-shapped-linked-lists/1

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

int count_nodes(Node *head)
{
    int c=0;
    Node *curr=head;
    while(curr!=NULL)
    {
        c++;
        curr=curr->next;
    }
    return c;
}

int intersection(int d,Node *head1,Node *head2)
{
    Node *curr1=head1,*curr2=head2;
    for(int i=0;i<d;i++)
    {
        if(curr1==NULL) return -1;
        curr1=curr1->next;
    }
    while(curr1 && curr2)
    {
        if(curr1==curr2) return curr1->data;
        curr1=curr1->next;
        curr2=curr2->next;
    }
    return -1;
}

//Function to find intersection point in Y shaped Linked Lists.
int intersectPoint(Node* head1, Node* head2)
{
    // counting nodes in both link list
    int c1=count_nodes(head1);
    int c2=count_nodes(head2);
    int d=abs(c1-c2);
    
    if(c1>c2) return intersection(d,head1,head2);
    else return intersection(d,head2,head1);
}