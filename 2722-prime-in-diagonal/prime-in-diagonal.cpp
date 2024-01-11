class Solution {
public:
    int isprime(int n)
    {
        if(n==1)return 0;
        for(int i=2;i*i<=(n);i++)
        {
            if(n%i==0)return 0;
        }
        return 1;
    }
    int diagonalPrime(vector<vector<int>>& nums) {
        
        int ans=0,c=0;
        for(int i=0;i<nums.size();i++)
        {
            for(int j=0;j<nums[i].size();j++)
            {
                if(i==j|| i+j==nums.size()-1)
                {
                    if(isprime(nums[i][j]))
                    {
                        cout<<nums[i][j]<<" ";
                        c+=1;
                        ans=max(ans,nums[i][j]);
                    }
                }
            }
        }
        if(c==0)
        {
            return 0;
        }
        return ans;
    }
};