class Solution {
public:
void solve(int ind,int n,string s,vector<string>&ans,vector<string>temp)
{
    if(ind==n && temp.size()==4)
    {
        string valid=temp[0]+'.'+temp[1]+'.'+temp[2]+'.'+temp[3];
        ans.push_back(valid);
        return;
    }
    string str="";
    for(int i=ind;i<n && temp.size()<4;i++)
    {
        if(s[i]-'0'>9)
        {
            continue;
        }
        str+=s[i];
        if(str[0]=='0' and str.length()>1)
        {
            return ;
        }
        int x=stoi(str);
        if(x>=0 and x<=255)
        {
            temp.push_back(str);
            solve(i+1,n,s,ans,temp);
            temp.pop_back();
        }
        if(x<0 or x>255)
        {
            break;
        }

    }
}
    vector<string> restoreIpAddresses(string s) {
        vector<string>ans;
        vector<string>temp;
        solve(0,s.size(),s,ans,temp);
        return ans;
    }
};