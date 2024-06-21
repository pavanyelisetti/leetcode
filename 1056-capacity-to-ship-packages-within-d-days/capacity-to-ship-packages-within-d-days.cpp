class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int total=0;
        for(int i=0;i<weights.size();i++)
        {
            total+=weights[i];
        }
        int low=1;
        int high=total;
        while(low<=high)
        {
            int sum=0;
            int c=0;
            int mid=low+(high-low)/2;
            int flag=0;
            cout<<mid<<" ";
            for(int i=0;i<weights.size();i++)
            {
                sum+=weights[i];
                if(weights[i]>mid)
                {
                    low=mid+1;
                    flag=1;
                    break;
                    
                }
                 if(sum>mid)
                 {
                    c+=1;
                    sum=weights[i];
                 }
                 
            }
            if(flag==1)
            {
                continue;
            }
            c+=1;
            if(c<=days)
            {
                high=mid-1;
            }
            else
            {
                low=mid+1;
            }
            cout<<"\n";
          
        }
        return low;
    }
};