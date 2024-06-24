class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int i=0;
        int j=0;
        int ans=INT_MAX;
        long long sum=0;
        while(j<nums.size())
        {
            sum+=nums[j];
            while(sum>=target)
            {
                sum-=nums[i];
                 if(ans>(j-i+1))
                {
                    ans=j-i+1;
                    
                }
                i++;
            }
            j++;
        }
        j--;
        if(sum>=target)
        {
        while(i<nums.size())
        {
            if(sum>=target)
            {
                if(ans>(j-i+1))
                {
                    ans=j-i+1;
                    
                }
            }
            sum-=nums[i];
            i++;
        }
        }
        if(ans==INT_MAX)
        {
            ans=0;
        }
        return ans;
    }
};