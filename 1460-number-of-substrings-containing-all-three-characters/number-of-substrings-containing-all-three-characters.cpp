class Solution {
public:
    int numberOfSubstrings(string s) {
        int l=0;
        int r=0;
        map<char,int>mpp;
        int c=0;
        while(r<s.length())
        {
            mpp[s[r]]++;
            while(mpp['a']>=1 && mpp['b']>=1 && mpp['c']>=1)
            {
                
                c+=(s.length()-r);
                mpp[s[l]]--;
                l++;
            }
            cout<<c<<' ';
            r++;
        }
        return c;
    }
};