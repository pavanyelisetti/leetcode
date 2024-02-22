class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        if(trust.size()==0)
        {
            if(n==1)return 1;
            else return -1;
        }
        map<int,int>mp;
        map<int,int>nmp;
        for(int i=0;i<trust.size();i++)
        {
            mp[trust[i][1]]++;
            nmp[trust[i][0]]++;
        }
        for(auto it:mp)
        {
            if(it.second==n-1 and nmp.find(it.first)==nmp.end())
            {
                return it.first;
            }
        }
        return -1;
        
    }
};