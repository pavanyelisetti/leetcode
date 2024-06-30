class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int l=0,r=0,ans=0,c=0;

        while(r<nums.size())
        {
            if(nums[r]!=1)
            {
                c++;
            }
                if(c>k)
                { 
                    if(nums[l]==0)
                    {
                        c--;
                    }
                    l++;    
                }
                if(c<=k)ans=max(ans,r-l+1); 
            r++;
        }
        return ans;
        
    }
};