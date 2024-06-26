class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        int m=mat.size();
        int n=mat[0].size();
        vector<pair<int,int>>ans;
        vector<int>a;
        for(int i=0;i<m;i++)
        {
            int low=0;
            int high=n-1;
            while(low<=high)
            {
                int mid=low+(high-low)/2;
                if(mat[i][mid]==1)
                {
                    low=mid+1;
                }
                else
                {
                    high=mid-1;
                }
            }
            ans.push_back(make_pair(high+1,i));
        }
        sort(ans.begin(),ans.end());
        for(int i=0;i<k;i++)
        {
            a.push_back(ans[i].second);
            
        }
        return a;
        
    }
};