
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
       ListNode* dummy=new ListNode();    //creating new list;
       ListNode* temp=dummy;    // temporarty variable pointing empty list;
       int c=0;
       while(l1!=NULL||l2!=NULL||c)
       {
           int s=0;
           if(l1!=NULL)
           {
               s+=l1->val;
               l1=l1->next;
           }
           if(l2!=NULL)
           {
               s+=l2->val;
               l2=l2->next;
           }
           s+=c;
           c=s/10;
           ListNode* newnode=new ListNode(s%10);
           temp->next=newnode;
           temp=temp->next;
          } 
          return dummy->next;
    }
};
