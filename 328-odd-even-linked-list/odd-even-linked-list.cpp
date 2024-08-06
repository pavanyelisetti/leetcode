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
    ListNode* oddEvenList(ListNode* head) {
       
        if (head==NULL || head->next==NULL)
        {
            return head;
        }
        ListNode* temp=head;
        int c1=1;
        while(temp->next->next!=NULL)
        {
            temp=temp->next;
            c1++;
        }
        if(c1%2==0)
        {
            temp=temp->next;
        }
        c1++;
        ListNode* dummy;
        if(c1%2==0)
        {
         dummy=temp->next;
        }
      
        ListNode *temp1=head;
        ListNode* dummy1=temp;
        while(temp1!=dummy1 )
        {
            cout<<temp1->val;
            temp->next=temp1->next;
            
            temp1->next=temp1->next->next;
            temp1=temp1->next;
            temp=temp->next;

        }
        if(c1%2==0)
        {
            temp->next=dummy;
            temp=temp->next;
        }
        temp->next=NULL;
        return head;
      }

};