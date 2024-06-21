class Solution {
public:
    int minDays(vector<int>& bloomDay, int m, int k) 
    {
        if(1LL*m*k>bloomDay.size())
        {
            return -1;
        }
        long long max= *max_element(bloomDay.begin(),bloomDay.end());
        long long low=1;
        long long  high=max;
        
        while(low<=high)
        {
            int v=0;
            int c=0;
            long long mid=low+(high-low)/2;
            cout<<mid<<" ";
            for(int i=0;i<bloomDay.size();i++)
            {
                if(mid>=bloomDay[i])
                {
                    c+=1;
                    if(c==k)
                    {
                        v+=1;
                        c=0;
                    }
                }
                else
                {
                    c=0;
                }
            }
            if(v>=m)
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
    
};