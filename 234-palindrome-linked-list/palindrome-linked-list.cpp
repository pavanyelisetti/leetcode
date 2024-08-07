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
    bool isPalindrome(ListNode* head) {
    if(head==NULL or head->next==NULL)return true;
     ListNode *slow=head;
     ListNode *fast=head;
     while(fast->next!=NULL and fast->next->next!=NULL)
     {
        slow=slow->next;
        fast=fast->next->next;
     }
     slow=slow->next;
     ListNode *prev=NULL;
     ListNode *temp;
     while(slow!=NULL)
     {
        temp=slow->next;
        slow->next=prev;
        prev=slow;
        slow=temp;
     }
     
     temp=head;
     
     while(prev!=NULL)
     {
        cout<<temp->val<<" ";
        cout<<prev->val<<endl;
        if(temp->val!=prev->val)return false;
        temp=temp->next;
        prev=prev->next;
     }
     return true;

    }
};