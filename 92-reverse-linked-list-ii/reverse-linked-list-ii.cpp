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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        vector<int>a;
        ListNode *temp=head;
        while(temp!=NULL)
        {
            a.push_back(temp->val);
            temp=temp->next;
        }
        reverse(a.begin()+left-1,a.begin()+right);
        temp=head;
        int i=0;
        while(temp!=NULL){
            temp->val=a[i];
            temp=temp->next;
            i+=1;
        }
        return head;
    }
};