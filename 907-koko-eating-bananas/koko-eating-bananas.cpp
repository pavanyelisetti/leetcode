class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        sort(piles.begin(),piles.end());
        int n=piles.size();
        if(h==n)
        {
            return piles[n-1];
        }
        else
        {
            long long low=1;
            long long high=piles[n-1];
            long long mid=0;
            while(low<=high)
            {
                long long x=0;
                int mid=low+(high-low)/2;
                for(int i=0;i<n;i++)
                {
                    if(piles[i]%mid==0)
                    {
                        x+=piles[i]/mid;
                    }
                    else{
                        x+=(piles[i]/mid)+1;
                    }
                    
                }
                if(x<=h)
                {
                    high=mid-1;
                }
                else
                {
                    low=mid+1;
                }
            }
            return low;
        }
        
    }
};