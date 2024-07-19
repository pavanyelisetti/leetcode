class Solution {
public:
void count(int ind,int n,vector<int>&nums,vector<vector<int>>&ans,vector<int>&ds)
{
    if(ind==n)
    {
        ans.push_back(nums);
        return;
    }
    for(int i=ind;i<n;i++)
    {
        swap(nums[i],nums[ind]);
        count(ind+1,n,nums,ans,ds);
        swap(nums[i],nums[ind]); 
    }
}
    vector<vector<int>> permute(vector<int>& nums) {
        vector<int>ds;
        vector<vector<int>>ans;
        count(0,nums.size(),nums,ans,ds);
        return ans;
    }
};