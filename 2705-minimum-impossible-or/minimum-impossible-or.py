class Solution:
    def minImpossibleOR(self, nums: List[int]) -> int:
        i=0
        while(True):
            x=1<<i
            if x not in nums:
                return x
            i+=1

        return 0