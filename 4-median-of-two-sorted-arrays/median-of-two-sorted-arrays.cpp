class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size()+nums2.size();
        int i=0,j=0;
        int c=0;
        int x=n/2;
        int y=x-1;
        double ele1=0,ele2=0;
        while(i<nums1.size() && j<nums2.size())
        {
         
            if(nums1[i]<nums2[j])
            {
                if(c==y)
                {
                    ele1=nums1[i];
                }
                if(c==x)
                {
                    ele2=nums1[i];
                }
                i++;
                c++;
               
            }
            else
            {
                if(c==y)
                {
                    ele1=nums2[j];
                }
                if(c==x)
                {
                    ele2=nums2[j];
                    
                }
                j++;
                c++;
            }
        
        }
       
        while(i<nums1.size())
        {
            if(c==y)
                {
                    ele1=nums1[i];
                }
                if(c==x)
                {
                    ele2=nums1[i];

                }
                i++;
                c++;
        }
        while(j<nums2.size())
        {
            if(c==y)
                {
                    ele1=nums2[j];
                }
                if(c==x)
                {
                    ele2=nums2[j];
                    
                }
                j++;
                c++;
        }
     
        if(n%2==1)
        {
            return ele2;
        }
        else
        {
            return (ele1+ele2)/2.0;
        }

        
    }
};