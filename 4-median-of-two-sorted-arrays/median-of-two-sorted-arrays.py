class Solution:
    def findMedianSortedArrays(self, nums1: List[int], nums2: List[int]) -> float:
        nums1.extend(nums2)
        nums1=sorted(nums1)
        x=len(nums1)
        if(len(nums1)&1)==1:
            return nums1[x//2]
        else:
            ans=nums1[x//2]+nums1[x//2-1]
            return ans/2

        