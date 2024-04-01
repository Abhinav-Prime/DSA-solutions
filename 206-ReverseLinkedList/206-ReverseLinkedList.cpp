
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
         ListNode *temp=head;
    ListNode * prev=NULL;
    ListNode * forward=NULL;
    if (temp == NULL || temp->next == NULL) {
      return temp;
    }
  while(temp!=NULL)
  {
      forward=temp->next;
      temp->next=prev;
      prev=temp;
      temp=forward;
  }
  return prev;
    }
};
[1,2,3,4,5]
