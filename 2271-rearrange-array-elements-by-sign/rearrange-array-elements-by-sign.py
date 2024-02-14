class Solution:
    def rearrangeArray(self, nums: List[int]) -> List[int]:
        e=[]
        o=[]
        ans=[]
        for i in nums:
            if i>0:
                e.append(i)
            else:
                o.append(i)
        for i in range(len(e)):
            ans.append(e[i])
            ans.append(o[i])
        return ans

        