class Solution {
public:
    void solve(int ind,string digits,unordered_map<char,string>&dialpad,string temp,vector<string>&ans)
{
    if(ind>=digits.size() )
    {
        ans.push_back(temp);
        return;
    }
    char ch=digits[ind];
    string str=dialpad[ch];
    for(int i=0;i<str.size();i++)
    {
        temp+=str[i];
        solve(ind+1,digits,dialpad,temp,ans);
        temp.pop_back();
    }

}    vector<string> letterCombinations(string digits) {
        unordered_map<char,string>dialpad;
        if(digits.length()==0)return{};
        vector<string>ans;

        dialpad['2']="abc";
        dialpad['3']="def";
        dialpad['4']="ghi";
        dialpad['5']="jkl";
        dialpad['6']="mno";
        dialpad['7']="pqrs";
        dialpad['8']="tuv";
        dialpad['9']="wxyz";
        solve(0,digits,dialpad,"",ans);
        return ans;
    }
};