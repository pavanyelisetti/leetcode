class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int closest=nums[0]+nums[1]+nums[2],ans;
        for(int i=0;i<n-2;i++)
        {
            int j=i+1,k=n-1;
            while(j<k)
            {
                int sum = nums[i] + nums[j] + nums[k];
            if (abs(target - sum) < abs(target - closest)) {
                closest = sum; 
            }
                if(nums[i]+nums[j]+nums[k]==target)
                {
                    return target;
                }
                else if(nums[i]+nums[j]+nums[k]<target)
                {
                    j++;
                }
                else
                {
                    k--;
                }
            }
        }
        return closest;
        
    }
};