class Solution {
public:
    bool palin(int start,int end,string s)
    {
        while(start<=end)
        {
            if(s[start]!=s[end])
            {
                return false;
            }
            start++;
            end--;
        }
        return true;
    }
    void count(int ind,vector<string>&ds,vector<vector<string>>&ans,string s)
    {
        if(ind==s.length())
        {
            ans.push_back(ds);
            return;
        }
        for(int i=ind;i<s.length();i++)
        {
            if(palin(ind,i,s))
            {
                ds.push_back(s.substr(ind,i-ind+1));
                count(i+1,ds,ans,s);
                ds.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        vector<vector<string>>ans;
         vector<string>ds;
        count(0,ds,ans,s);
        return ans;
    }
};