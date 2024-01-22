class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int len=nums.size();;
        vector<int>s;
        sort(nums.begin(),nums.end());
        int sum=(len*(len+1))/2;
        int nsum=0;
        int r=0;
        for(int i=0;i<len-1;i++)
        {
            nsum+=nums[i];
            if(nums[i]==nums[i+1])
            {
                s.push_back(nums[i]);
            }
        }
      
        nsum+=nums[len-1];
        nsum-=s[0];
        s.push_back(sum-nsum);
        return s;
        
    }
};