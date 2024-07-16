class Solution {
public:
    void solve(int ind,int n,vector<int>&candidates,int target,vector<int>&ds,vector<vector<int>>&ans)
    {
        if(target==0)
        {
            ans.push_back(ds);
        }
        if(ind==n)
        {
            return;
        }
        for(int i=ind;i<n;i++)
        {
            if(i>ind && candidates[i]==candidates[i-1])
            {
                continue;
            }
            if(target>=candidates[i])
            {
                ds.push_back(candidates[i]);
                solve(i+1,n,candidates,target-candidates[i],ds,ans);
                ds.pop_back();
            }
            else
            {
                break;
            }
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<int>ds;
        vector<vector<int>>ans;
        sort(candidates.begin(),candidates.end());
        solve(0,candidates.size(),candidates,target,ds,ans);
        return ans;
        
    }
};