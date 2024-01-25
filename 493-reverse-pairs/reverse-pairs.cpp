class Solution {
public:
    int merging(vector<int>&nums,int low,int mid,int high)
    {
        int c=0;
        for(int i=low;i<=mid;i++)
        {
            int j=mid+1;
            while(j<=high && (nums[i])>1LL*2*nums[j])
            {
                j++;
            }
            c+=j-(mid+1);
        }
         int i=low;
         int j=mid+1;
        int temp[high+1];
        int k=low;
        while(i<=mid && j<=high)
        {
            if(nums[i]>nums[j])
            {
                temp[k++]=nums[j++];
            }
            else
            {
                temp[k++]=nums[i++];
            }
        }
        while(i<=mid)
        {
            temp[k++]=nums[i++];

        }
        while(j<=high)
        {
            temp[k++]=nums[j++];
        }
        for(int i=low;i<=high;i++)
        {
            nums[i]=temp[i];
        }
        return c;
    }
 int merge_sort(vector<int>&nums,int  low,int high)
    {
        if(low>=high)
        {
            return 0;
        }
        int c=0;
        int mid=low+(high-low)/2;
        c=merge_sort(nums,low,mid);
        c+=merge_sort(nums,mid+1,high);

        //merging
        c+=merging(nums,low,mid,high);
        return c;
    }
    int reversePairs(vector<int>& nums) {
        int c=merge_sort(nums,0,nums.size()-1);
        return c;
    }
};