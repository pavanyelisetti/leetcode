class Solution {
public:
    int minSteps(string s, string t) {
        int n=s.size();
        map<char,int>mpp1;
        map<char,int>mpp2;
        int ans=0;
        for(auto it:s) mpp1[it]++;
        for(auto it:t) mpp2[it]++;
        for(char i='a' ;i<='z';i++)
        {
            if(mpp1.find(i)!=mpp1.end() && mpp2.find(i)!=mpp2.end()){
                int a=mpp1[i];
                int b=mpp2[i];
                ans+=min(a,b);
            }
        }
        return n-ans;
        
    }
};