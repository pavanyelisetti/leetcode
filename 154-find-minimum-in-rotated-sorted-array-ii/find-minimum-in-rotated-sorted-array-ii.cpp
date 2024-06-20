class Solution {
public:
    int findMin(vector<int>& a) {
        int low=0;
    int high=a.size()-1;
    int min=a[0];
    while(low<=high)
    {
        int mid=low+(high-low)/2;
        if(a[low]==a[mid] && a[mid]==a[high])
        {
             if(min>a[low])
            {
                min=a[low];
            }
            low++;
            high--;
            continue;
        }
        if(a[low]<=a[mid])
        {
            if(min>a[low])
            {
                min=a[low];
            }
            low=mid+1;
        }
        else{
            if(min>a[mid])
            {
                min=a[mid];
            }
            high=mid-1;
        }

    }
    return min;
        
    }
};