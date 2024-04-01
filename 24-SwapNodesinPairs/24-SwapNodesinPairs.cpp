
class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        // ListNode * curr=head;int a=0;
        // while(curr!=NULL)
        // {
        //     curr=curr->next;
        //     a++;
        // }
      if(head==NULL)
      return NULL;
      ListNode * temp=head;
      ListNode * prev=NULL;
      ListNode * forward=NULL;
      int i=0;
      while(temp!=NULL && i<2)
      {
        forward=temp->next;
        temp->next=prev;
        prev=temp;
        temp=forward;
        i++;
      }  
[1,2,3,4]
