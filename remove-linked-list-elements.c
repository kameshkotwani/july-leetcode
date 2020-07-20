/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* removeElements(struct ListNode* head, int val)
{
  if(!head) return head;
  struct ListNode* temp=NULL;
  while(head!=NULL && head->val==val)
  {
    temp=head;
    head=head->next;
    free(temp);
  }
  if(head==NULL) return head;
  else
  {
    
    struct ListNode* p=head;
    while(p!=NULL && p->next!=NULL )
    {
      if(p->next->val==val)
      {
        p->next=p->next->next;
      }
      else
        p=p->next;
    }
   
  }

  return head;
  
}
