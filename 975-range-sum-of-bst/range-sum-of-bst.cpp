/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void postorder(TreeNode *root,int low,int high,int &ans)
    {
        if(root==NULL)
        {
            return ;
        }
       
        postorder(root->left,low,high,ans);
        postorder(root->right,low,high,ans);
         if(root->val>=low && root->val<=high)
        {
            ans+=root->val;
        }
       
    }
    int rangeSumBST(TreeNode* root, int low, int high) {
        int ans=0;
        postorder(root, low,high,ans);
        return ans;

        
    }
};