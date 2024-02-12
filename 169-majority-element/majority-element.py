class Solution:
    def majorityElement(self, nums: List[int]) -> int:
        b=set(nums)
        for i in b:
            if nums.count(i)>len(nums)//2:
                return i
            
        