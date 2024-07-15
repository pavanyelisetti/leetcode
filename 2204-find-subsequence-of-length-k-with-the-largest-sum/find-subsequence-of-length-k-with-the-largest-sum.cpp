class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
        map<pair<int,int>,int>mp;
        map<pair<int,int>,int>mp1;
        vector<int>ans;
        int c=0;
        for(int i=0;i<nums.size();i++)
        {
            mp[{nums[i],i}]=i;
        }
        for(auto it=mp.rbegin();it!=mp.rend();it++)
        {
            c++;
            mp1[{it->second,it->first.first}]=0;
            if(c==k)break;
        }
        for(auto it:mp1)
        {
            ans.push_back(it.first.second);
        }
        
        return ans;
    }
};