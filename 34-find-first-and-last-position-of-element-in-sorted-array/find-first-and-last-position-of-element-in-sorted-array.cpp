class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int low=0;
        int high=nums.size()-1;
        vector<int>ans;
        int l=-1;
        int u=-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid]<target)
            {
                low=mid+1;
            }
            else
            {
                if(nums[mid]==target)
                {
                    l=mid;
                }
                
                high=mid-1;
            }
        }
        low=0;
        high=nums.size()-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid]<target)
            {
                low=mid+1;
            }
            else
            {
                if(nums[mid]==target)
                {
                    u=mid;
                    low=mid+1;
                }
                else
                {
                    high=mid-1;
                }
            }
        }
        ans.push_back(l);
        ans.push_back(u);
        return ans;

        
    }
};