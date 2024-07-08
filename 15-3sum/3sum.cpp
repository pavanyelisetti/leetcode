class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        int n=nums.size();
        int i=0;
        for(int i=0;i<n-2;i++)
        {
            if(i > 0 && nums[i] == nums[i - 1]){   
                continue;
            }
            int j=i+1,k=n-1;
            while(j<k)
            {
                vector<int>temp;
                if(nums[i]+nums[j]+nums[k]==0)
                {
                    temp.push_back(nums[i]);
                    temp.push_back(nums[j]);
                    temp.push_back(nums[k]);
                    ans.push_back(temp);
                    j++;
                    k--;
                    while(nums[j]==nums[j-1]&&j<k)
                    {j++;}
                     while(nums[k]==nums[k+1]&&j<k)
                    {k--;}
            
                }
                else if(nums[i]+nums[j]+nums[k]<0)
                {
                    j++;
                }
                else
                {
                    k--;
                }
            }
        }
        return ans;
        
    }
};