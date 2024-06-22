class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        long long low=1;
        long long high=arr.size()-2;
        while(low<=high)
        {
            long long mid=low+(high-low)/2;
            if(arr[mid-1]<=arr[mid] && arr[mid]>=arr[mid+1])
            {
                return mid;
            }
            if(arr[mid-1]<=arr[mid])
            {
                low=mid+1;
            }
            else
            {
                high=mid-1;
            }
        }
        return -1;
    }
};