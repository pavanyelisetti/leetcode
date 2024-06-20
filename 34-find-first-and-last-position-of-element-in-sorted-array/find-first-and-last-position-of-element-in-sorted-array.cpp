class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>ans;
        int l=lower_bound(nums.begin(),nums.end(),target)-nums.begin();
        int u=upper_bound(nums.begin(),nums.end(),target)-nums.begin();
        u--;
        if(l<0 || l >= nums.size() || nums[l]!=target)
        {
            l=-1;
        }
        if(u<0 || u>=nums.size() || nums[u]!=target)
        {
            u=-1;
        }
        ans.push_back(l);
        ans.push_back(u);
        return ans;
    }
};