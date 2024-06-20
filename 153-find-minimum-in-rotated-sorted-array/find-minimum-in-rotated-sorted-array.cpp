class Solution {
public:
    int findMin(vector<int>& a) {
        int low=0;
        int high=a.size()-1;
        int ans=a[0];
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            if(a[low]<=a[mid])
            {
                if(ans>a[low])
                {
                    ans=a[low];
                }
                low=mid+1;
            }
            else
            {
                if(ans>a[mid])
                {
                    ans=a[mid];
                }
                high=mid-1;
            }
        }
        return ans;
        
    }
};