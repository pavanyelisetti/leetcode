class Solution {
public:
    int findPeakElement(vector<int>& a) {
        if(a.size()==1)
        {
            return 0;
        }
        if(a[0]>a[1])
        {
            return 0;
        }
        if(a[a.size()-1]>a[a.size()-2])
        {
            return a.size()-1;
        }
        long long low=1;
        long long high=a.size()-2;
        while(low<=high)
        {
            long long mid=low+(high-low)/2;
            if(a[mid-1]<=a[mid] && a[mid]>=a[mid+1])
            {
                return mid;
            }
            if(a[mid-1]<=a[mid])
            {
                low=mid+1;
            }
            else
            {
                high=mid-1;
            }
        }
        return a.size()-1;
        
    }
};