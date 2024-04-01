/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
          if(head==NULL)
  return NULL;
  ListNode * temp=head;int a=0;
  while(temp!=NULL)
  {
    temp=temp->next;
    a++;
  }
  ListNode * prev=NULL;
  ListNode * forward=NULL;
  ListNode *curr=head;
  int c=0;
  while(curr!=NULL && c<k)
  {
      forward=curr->next;
      curr->next=prev;
      prev=curr;
      curr=forward;
      c++;
  }
  if(forward!=NULL &&(a-c)>=k)
  {
      head->next=reverseKGroup(forward,  k);
  }
  if(forward!=NULL &&(a-c)<k)
  {
    head->next=forward;
  }
  return prev;
    }
};