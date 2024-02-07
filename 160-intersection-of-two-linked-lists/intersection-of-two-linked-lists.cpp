/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *temp1=headA,*temp2=headB;
        while(temp1!=NULL)
        {
            temp2=headB;
            while(temp2!=NULL)
            {
                if(temp1->val==temp2->val)
                {
                    if(temp1==temp2)
                    {
                        ListNode * ans=new ListNode(temp1->val);
                        return ans;
                    }
                }
                temp2=temp2->next;
            }
            temp1=temp1->next;
        }
        return NULL;
   
    }
};