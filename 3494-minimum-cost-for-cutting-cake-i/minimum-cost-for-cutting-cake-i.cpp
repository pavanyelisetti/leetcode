class Solution {
public:
    int minimumCost(int m, int n, vector<int>& horizontalCut, vector<int>& verticalCut) {
        sort(horizontalCut.begin(),horizontalCut.end());
        sort(verticalCut.begin(),verticalCut.end());
        int ans=0,h=1,v=1;
        int i=horizontalCut.size()-1;
        int j=verticalCut.size()-1;
        while(i>=0 and j>=0)
        {
            if(verticalCut[j]>=horizontalCut[i])
            {
                ans+=verticalCut[j]*v;
                h++;
                j--;
            }
            else
            {
                ans+=horizontalCut[i]*h;
                v++;
                i--;
            }
        }
        while(i>=0)
        {
            ans+=horizontalCut[i]*h;
            i--;
        }
        while(j>=0)
        {
            ans+=verticalCut[j]*v;
                j--;
        }
        return ans;

    }
};