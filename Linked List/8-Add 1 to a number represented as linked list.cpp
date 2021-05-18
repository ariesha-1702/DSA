// https://practice.geeksforgeeks.org/problems/add-1-to-a-number-represented-as-linked-list/1


#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};

class Solution
{
    public:
    Node* addOne(Node *head) 
    {
        // last stores thr rightmost node which is not equal to 9
        Node* last = NULL;
        Node* curr = head;
     
        while (curr->next != NULL) {
     
            if (curr->data != 9) last = curr;
            curr = curr->next;
        }
     
        // If last node is not equal to 9
        // add 1 to it and return the head
        if (curr->data != 9) {
            curr->data++;
            return head;
        }
     
        // all digits are 9
        if (last == NULL) {
            last = new Node(0);
            last->data = 0;
            last->next = head;
            head = last;
        }
     
        // For cases when the righmost node which
        // is not equal to 9 is not the last
        // node in the linked list
        last->data++;
        last = last->next;
     
        while (last != NULL) {
            last->data = 0;
            last = last->next;
        }
     
        return head;
    }
};