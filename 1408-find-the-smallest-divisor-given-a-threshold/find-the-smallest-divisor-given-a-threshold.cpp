class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int max= *max_element(nums.begin(),nums.end());
        int low=1;
        int high=max;
        while(low<=high)
        {
            int x=0;
            int mid=low+(high-low)/2;
            for(int i=0;i<nums.size();i++)
            {
                if(nums[i]%mid==0)
                {
                    x+=nums[i]/mid;
                }
                else
                {
                    x+=nums[i]/mid+1;
                }
            }
            if(x<=threshold)
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