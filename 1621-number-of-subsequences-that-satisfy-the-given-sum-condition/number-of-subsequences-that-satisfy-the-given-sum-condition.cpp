class Solution {
public:
    int numSubseq(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int i=0,j=nums.size()-1;
        long long mod=1e9+7;
        long long c=0;
        vector<int>p2(nums.size());
        p2[0] = 1;
        for(int i = 1; i < nums.size(); i++) {
            p2[i] = (p2[i-1] * 2)%mod;
        }
        while(i<=j)
        {
            if(nums[i]+nums[j]<=target)
            {
                    c=(c%mod)+p2[j-i];
                    i++;
            }
            else
            {
                j--;
            }

        }
        return c%mod;

        
        
    }
};