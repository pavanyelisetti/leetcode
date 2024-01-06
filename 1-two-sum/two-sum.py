class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        c=[]
        n=0
        for i in range(len(nums)):
            for j in range(len(nums)):
                if(i!=j):
                    if(nums[i]+nums[j])==target:
                        c.append(i)
                        c.append(j)
                        n=1
                        break
            if n==1:
                break
        return (c)
        