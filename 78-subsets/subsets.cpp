class Solution {
public:
    void solve(int ind,int n,vector<int>&nums,vector<int>&ds,vector<vector<int>>&ans)
    {
        if(ind==n)
        {
            ans.push_back(ds);
            return ;
        }
        ds.push_back(nums[ind]);
        solve(ind+1,n,nums,ds,ans);
        ds.pop_back();
        solve(ind+1,n,nums,ds,ans);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>ds;
        vector<vector<int>>ans;
        solve(0,nums.size(),nums,ds,ans);
        return ans;
    }
};