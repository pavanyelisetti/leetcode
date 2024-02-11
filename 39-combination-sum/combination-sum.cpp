class Solution {
public:
void comb(int i,vector<int>&a,int sum,int n,vector<int>&ds,vector<vector<int>>&ans)
    {
        if(i==n)
        {
            if(sum==0)
            {
                ans.push_back(ds);
            }
            return;
        }
        if(sum>0)
        {
            ds.push_back(a[i]);
            comb(i,a,sum-a[i],n,ds,ans);
            ds.pop_back();
        }
        comb(i+1,a,sum,n,ds,ans);
    }
    vector<vector<int>> combinationSum(vector<int>& a, int sum) {
        // set<int>st(a.begin(),a.end());
        // vector<int>arr(st.begin(),st.end());
        vector<vector<int>>ans;
   
        vector<int>ds;
        comb(0,a,sum,a.size(),ds,ans);
       
        
        return ans;
        
    }
};