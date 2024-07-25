class Solution {
public:
    void solve(int ind,string digits,unordered_map<char,string>&dialpad,string temp,vector<string>&ans)
{
    if(ind==digits.length())
    {
        ans.push_back(temp);
        return ;
    }
    char c=digits[ind];
    string s=dialpad[c];
    for(int i=0;i<s.length();i++)
    {
        temp+=s[i];
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