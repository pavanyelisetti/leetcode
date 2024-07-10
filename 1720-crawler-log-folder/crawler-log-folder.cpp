class Solution {
public:
    int minOperations(vector<string>& s) {
        int c=0,c1=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=="../")
            {
                if(c!=0)c--;
            }
            else if(s[i]!="./")
            {
                c++;
            }
        }
     
        return c;
    }
};