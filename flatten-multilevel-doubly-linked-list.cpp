/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};
*/

class Solution {
public:
    Node *flat_recursion(Node *head)
    {
      Node *curr=head,*tail=head;
      while(curr)
      {
        Node *child=curr->child;
        Node *next=curr->next;
        if(child)
        {
          Node *_tail=flat_recursion(child);
          _tail->next=next;
          if(next) next->prev=_tail;
          
          curr->next=child;
          child->prev=curr;
          curr->child=nullptr;
          curr=tail;
        }
        else
        {
          curr=next;
          if(curr) tail=curr;
        }
      }
      return tail;
    }
    Node* flatten(Node* head) 
    {
      if(head) flat_recursion(head);
      return head;
    }
};
