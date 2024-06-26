class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        vector<int>ans;
        sort(nums.begin(),nums.end()) ;
        int l=lower_bound(nums.begin(),nums.end(),target)-nums.begin();
        int u=upper_bound(nums.begin(),nums.end(),target)-nums.begin();
        u--;
        if((l<0 || l>=nums.size() )|| nums[l]!=target)
        {
            l=-1;
        }
        if((u<0 ||u>=nums.size())||nums[u]!=target)
        {
            u=-1;
        }
        if(l!=-1 && u!=-1)
        {
            for(int i=l;i<=u;i++)
            {
                ans.push_back(i);
            }
        }
        return ans;


   }
};