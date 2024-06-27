class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int l=lower_bound(nums.begin(),nums.end(),0)-nums.begin();
        int u=upper_bound(nums.begin(),nums.end(),0)-nums.begin();
        int ans=nums.size()-u;
        return max(l,ans);
    }
};