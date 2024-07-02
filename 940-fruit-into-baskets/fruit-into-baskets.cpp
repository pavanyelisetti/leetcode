class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int l=0,r=1,ans=0,c=0,c1=0,c2=0;
        while(r<fruits.size() && fruits[l]==fruits[r] )
        {
            r++;
        }
        for(int i=0;i<fruits.size();i++)
        {
            if(fruits[i]==fruits[l])
            {
                l=i;
                c++;
            }
            else if(fruits[i]==fruits[r])
            {
                r=i;
                c++;
            }
            else
            {
                ans=max(c,ans);
                c=abs(l-r);
                if(l>r)
                {
                    r=i;
                }
                else
                {
                    l=r;
                    r=i;
                }
                c++;
            }
        }
        ans=max(c,ans);
        return ans;
        
    }
};