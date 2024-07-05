class Solution {
public:
    int count(vector<int>&nums,int k)
    {
        int l=0,r=0,c=0;
        map<int,int>mpp;
        while(r<nums.size())
        {
            mpp[nums[r]]++;
            while(mpp.size()>k)
            {
                mpp[nums[l]]--;
                if(mpp[nums[l]]==0)
                {
                    mpp.erase(nums[l]);
                }
                l++;
            }
            if(mpp.size()<=k)
            {
                c+=(r-l+1);
            }
            r++;
        }
        return c;
    }
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return count(nums,k)-count(nums,k-1);
        
    }
};