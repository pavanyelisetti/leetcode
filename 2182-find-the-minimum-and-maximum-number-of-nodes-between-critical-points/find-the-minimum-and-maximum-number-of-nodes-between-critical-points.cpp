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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        // if(head==NULL || head->next==NULL || head->next->next==NULL)return{-1,-1};
        ListNode *prev,*curr,*temp;
        prev=head;
        curr=head->next;
        temp=curr->next;
        vector<int>t;
        int c=2;
        while(temp!=NULL)
        {
            if((prev->val<curr->val) && (curr->val>temp->val))
            {
                t.push_back(c);
            }
            else if((prev->val>curr->val) && (curr->val<temp->val))
            {
                t.push_back(c);
            }
            c++;
            temp=temp->next;
            curr=curr->next;
            prev=prev->next;
        }
        int max=0,min=INT_MAX;
        if(t.size()>=2)
        {
        int max=t[t.size()-1]-t[0];
            
            for(int i=1;i<t.size();i++)
            {
                if(min>(t[i]-t[i-1]))
                {
                    min=t[i]-t[i-1];
                }

                cout<<t[i]<<" ";
            }
            return {min,max};
        }
        else
        {
            return{-1,-1};
        }
        return{};
        
    }
};