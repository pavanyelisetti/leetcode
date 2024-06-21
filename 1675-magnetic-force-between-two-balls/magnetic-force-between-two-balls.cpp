class Solution {
public:
    int maxDistance(vector<int>& position, int m) {
        sort(position.begin(),position.end());
        int low=1;
        int high=position[position.size()-1];
        while(low<=high)
        {
            int mid=(low+(high-low)/2);
            int ans=0;
            int c=1;
            for(int i=1;i<position.size();i++)
            {
                if(position[i]-position[ans]>=mid)
                {
                    c+=1;
                    ans=i;
                }
            }
            if(c>=m)
            {
                low=mid+1;
            }
            else
            {
                high=mid-1;
            }
        }
        return high;
        
    }
};