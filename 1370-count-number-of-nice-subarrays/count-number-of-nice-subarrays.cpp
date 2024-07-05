class Solution {
public:
    int count(vector<int>&nums,int k)
    {
        int l=0,r=0,c=0,ans=0;
        while(r<nums.size())
        {
            if(nums[r]%2==1)
            {
                c++;
            }
            while(c>k)
            {
                if(nums[l]%2==1)
                {
                    c--;
                }
                l++;
            }
            if(c<=k)
            {
                ans+=r-l+1;
            }
            r++;
        }
        return ans;
    }
    int numberOfSubarrays(vector<int>& nums, int k) {
            return count(nums,k)-count(nums,k-1);   
    }
};