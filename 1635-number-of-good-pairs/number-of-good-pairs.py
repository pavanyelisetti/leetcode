class Solution:
    def numIdenticalPairs(self, nums: List[int]) -> int:
        c=0
        for i in range(len(nums)):
            for j in range(len(nums)):
                if(i<j):
                    if(nums[i]==nums[j]):
                        c+=1
        return c
        