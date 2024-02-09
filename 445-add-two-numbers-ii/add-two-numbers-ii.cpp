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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode*temp=l1,*prev=NULL,*temp1;
        while(temp!=NULL)
        {
            temp1=temp->next;
            temp->next=prev;
            prev=temp;
            temp=temp1;
        }
        ListNode *head1=prev;
        prev=NULL;
        temp=l2;
        while(temp!=NULL)
        {
            temp1=temp->next;
            temp->next=prev;
            prev=temp;
            temp=temp1;
        }
        ListNode *head2=prev;
        ListNode *x=new ListNode(0);
        ListNode *ans=x;
        int sum=0,carry=0;
        while(head1 &&head2)
        {
            sum=head1->val+head2->val+carry;
            carry=sum/10;
            sum=sum%10;
            ListNode *n=new ListNode(sum);
            x->next=n;
            x=n;
            head1=head1->next;
            head2=head2->next;
        }
        while(head1!=NULL)
        {
            sum=head1->val+carry;
            carry=sum/10;
            sum=sum%10;
            ListNode *n=new ListNode(sum);
            x->next=n;
            x=n;
            head1=head1->next;
        }
        while(head2!=NULL)
        {
            sum=head2->val+carry;
            carry=sum/10;
            sum=sum%10;
            ListNode *n=new ListNode(sum);
            x->next=n;
            x=n;
            head2=head2->next;
        }
        if(carry!=0)
        {
            ListNode *n=new ListNode(carry);
            x->next=n;
            x=n;
        }
        ListNode *newans=ans->next;
        ans=NULL;
        ans=newans;
        prev=NULL;
        while(ans!=NULL)
        {
            newans=ans->next;
            ans->next=prev;
            prev=ans;
            ans=newans;
        }
        return prev;
        

        
    }
};