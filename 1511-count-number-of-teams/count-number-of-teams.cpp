class Solution {
public:
    int numTeams(vector<int>& rating) {
        int ans=0;
        for(int i=1;i<rating.size()-1;i++)
        {
            int c=0,c1=0,d=0,d1=0;
            for(int j=0;j<i;j++)
            {
                if(rating[j]<rating[i])
                {
                    c++;
                }
                if(rating[j]>rating[i])
                {
                    d++;
                }
            }
            for(int k=i+1;k<rating.size();k++)
            {
                if(rating[k]>rating[i])
                {
                    c1++;
                }
                if(rating[k]<rating[i])
                {
                    d1++;
                }
            }
            ans+=(c*c1);
            ans+=(d*d1);
        }
        return ans;
    }
};