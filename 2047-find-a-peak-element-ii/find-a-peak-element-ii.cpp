class Solution {
public:
    int find_max(vector<vector<int>>&mat,int mid)
    {
        int max=0;
        int ind;
        for(int i=0;i<mat.size();i++)
        {
            if(max<mat[i][mid])
            {
                max=mat[i][mid];
                ind=i;
            }
        }
        return ind;
    }
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        vector<int>ans;
        int low=0;
        int high=mat[0].size()-1;
        int left,right;
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            int max=find_max(mat,mid);
            if(mid-1>=0)
            {
                 left=mat[max][mid-1];
            }
            else
            {
                left=-1;
            }
            if((mid+1)<mat[0].size())
            {
                right=mat[max][mid+1];
            }
            else
            {
                right=-1;
            }
        
        if(left<mat[max][mid] && mat[max][mid]>right)
        {
                ans.push_back(max);
                ans.push_back(mid);
                return ans;
        }
        else if(left>mat[max][mid])
        {
                high=mid-1;
        }
        else
        {
                low=mid+1;
        }
        }
        return ans;
    }
};