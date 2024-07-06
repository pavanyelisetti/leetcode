class Solution {
public:
    string minWindow(string s, string t) {
        if(t.length()>s.length())return "";
        map<char,int>mpp;
        for(int j=0;j<t.length();j++)
        {
            mpp[t[j]]++;
        }
        int l=0,r=0,c=0;
        int min=INT_MAX,ind=-1;
        while(r<s.length())
        {
            if(mpp[s[r]]>0)
            { 
                c++;
            }
            mpp[s[r]]--;
            while(c==t.length())
            {
                if(min>(r-l+1))
                {
                    min=r-l+1;
                    ind=l;
                }
                mpp[s[l]]++;
                if(mpp[s[l]]>0)
                {
                    c--;
                }
                l++;
            }
            r++;
        }
        if (ind==-1)return "";
        return s.substr(ind,min);
    } 
};