class Solution {
public:
    int findTheWinner(int n, int k) {
        if(n==1)return 1;
        vector<int>ans(n+1,0);
        ans[0]=-1;
        int i=1;
        int c=0;
        int x=0;
        while(i<n+1)
        {
            if(ans[i]!=-1)c++;
            
            if(c==k)
            {
                ans[i]=-1;
                x++;
               c=0;
            }
            
            if(x==n-1)
            {
                for(int i=1;i<ans.size();i++)
                {
                    cout<<ans[i]<<" ";
                }
                return find(ans.begin(),ans.end(),0)-ans.begin();
            }
            i++;
            if(i==n+1)
            {
                i=1;
            }
        }
        return 0;
    }
};