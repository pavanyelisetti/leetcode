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
   
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2){
        ListNode *temp1=l1,*temp2=l2,*prev=NULL,*temp,*head1,*head2;
        long long sum=0,carry=0,sum1=0,sum2=0,c=0,c1=0,c2=0;
        head1=l1;
        head2=l2;
        ListNode *x=new ListNode(0);
        ListNode *ans=x;
        while(head1!=NULL && head2!=NULL)
        {
            sum=(head1->val)+(head2->val)+carry;
            carry=sum/10;
            sum=sum%10;
            head1=head1->next;
            head2=head2->next;
            ListNode * one=new ListNode(sum);
            x->next=one;
            x=one;
            
        }
        while(head1!=NULL)
        {
            sum=(head1->val)+carry;
            carry=sum/10;
            sum=sum%10;
            head1=head1->next;
            ListNode * one=new ListNode(sum);
            x->next=one;
            x=one;
        }
        while(head2!=NULL)
        {
            sum=(head2->val)+carry;
            carry=sum/10;
            sum=sum%10;
            head2=head2->next;
            ListNode * one=new ListNode(sum);
            x->next=one;
            x=one;
        }
        if(carry!=0)
        {
            ListNode * one=new ListNode(carry);
            x->next=one;
            x=one;
        }
        return ans->next;
    }
};