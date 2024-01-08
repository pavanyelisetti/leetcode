class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
         vector<unordered_map<int,int>>v( nums.size());
         int ans=0;
        for(int i=1;i<nums.size();i++)
        {
            for(int j=0;j<i;j++)
            {
                long long int a=(nums[i])*1LL-(nums[j])*1LL;
                if(a<=INT_MIN || a>=INT_MAX) continue;
                v[i][a]++;
                if(v[j].count(a)){
                    ans+=v[j][a];
                    v[i][a]+=v[j][a];
                }

            }
        }
        return ans;
        
    }
};