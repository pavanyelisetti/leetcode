class Solution {
public:
    int splitArray(vector<int>& nums, int k) {
        int sum=0;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
        }
        int low=*max_element(nums.begin(),nums.end());
        int high=sum;
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            int c=1,s=0;
            for(int i=0;i<nums.size();i++)
            {
                s+=nums[i];
                if(s>mid)
                {
                    c++;
                    s=nums[i];
                }
            }
            if(c<=k)
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