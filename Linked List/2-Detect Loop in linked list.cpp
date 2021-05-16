// https://leetcode.com/problems/linked-list-cycle/submissions/

/* Definition for singly-linked list */
#include<bits/stdc++.h>
using namespace std;
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

// FLOYD's ALGORITHM 
// two pointers slow and fast
// slow moves by 1 and fast moves by two each time
// if there is a loop then at an instant both pointers will be pointing to the same node
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if (head == NULL) return false;
        ListNode *slow = head;
        ListNode *fast = head->next;
        while (slow != fast) 
        {
          if (fast == NULL || fast->next == NULL) return false;
          slow = slow->next;
          fast = fast->next->next;
        }
        return true;
    }
};


class Solution {
public:
    bool hasCycle(ListNode *head) {
        while(head!=NULL)
        {
            if(head->val==INT_MIN) return true;
            head->val=INT_MIN;
            head=head->next;
        }
        return false;
    }
};




// https://practice.geeksforgeeks.org/problems/detect-loop-in-linked-list/1#

struct Node
{
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
    //Function to check if the linked list has a loop.
    bool detectLoop(Node* head)
    {
        while(head!=NULL)
        {
            if(head->data==-1) return true;
            head->data=-1;
            head=head->next;
        }
        return false;
    }
};


