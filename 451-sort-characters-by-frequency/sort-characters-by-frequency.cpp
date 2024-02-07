#include<bits/stdc++.h>
class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int>mp;
        multimap<int,char>newmp;
        string ans;
        for(int i=0;i<s.size();i++)
        {
                mp[s[i]]++;
        }

        for(auto i=mp.begin();i!=mp.end();i++)
        {
            newmp.insert({i->second,i->first});
        }
        for(auto i:newmp)
        {
            for(int j=0;j<i.first;j++)
            {
                ans+=i.second;
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
        
    }
};