class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>mpp;
        vector<int>a;
        int flag=1;
        int ans,x,i;
      
        for(i=0;i<nums.size();i++)
        {
            mpp[nums[i]]++;
        }
        for(i=0;i<nums.size();i++)
        {
            
            if(flag==1 && mpp[target-nums[i]]>=1)
            {
                    x=target-nums[i];
                    if(x!=nums[i])
                    {
                        ans=i;
                    flag=0;
            
                    }
                    else
                    {
                        if(mpp[nums[i]]>1)
                        {
                            ans=i;
                    flag=0;
                
                        }
                    }
                    continue;
                    
            }
            if(x==nums[i])
            {
                cout<<ans<<" "<<i;
                a.push_back(ans);
                a.push_back(i);
                return a;
            }
        }
        a.push_back(ans);
        a.push_back(i);   
        return a;
    }
};