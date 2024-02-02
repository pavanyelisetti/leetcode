class Solution {
public:
    void solve(int ind,int n,vector<int>&nums,vector<int>&ds,set<vector<int>>&ans1)
    {
        if(ind==n)
        {
            ans1.insert(ds);
            return;
        }
        ds.push_back(nums[ind]);
        solve(ind+1,n,nums,ds,ans1);
        ds.pop_back();
        solve(ind+1,n,nums,ds,ans1);

    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int>ds;
        vector<vector<int>>ans;
        set<vector<int>>ans1;
        solve(0,nums.size(),nums,ds,ans1);
        for(auto i:ans1)
        {
            ans.push_back(i);
        }
        return ans;
    }
};