class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        int max=0;
        if(tokens.size()==1)
        {
            if(tokens[0]<=power)
            {
                return 1;
            }
            return 0;
        }
        sort(tokens.begin(),tokens.end());
        int i=0;
        int j=tokens.size()-1;
        int ans=0;
        while(i<j and power>=tokens[i] )
        {
            while(power>=tokens[i])
            {
                ans+=1;
                if(max<=ans)
                {
                    max=ans;
                }
                power-=tokens[i];
                i+=1;
            }
            if(power<tokens[i])
            {
                power+=tokens[j];
                ans-=1;
                j--;
            }
        }
        return max;
    }
};