class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int n=piles.size();
        int max= *max_element(piles.begin(),piles.end());
        if(h==n)
        {
            return max;
        }
        else
        {
            long long low=1;
            long long high=max;
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