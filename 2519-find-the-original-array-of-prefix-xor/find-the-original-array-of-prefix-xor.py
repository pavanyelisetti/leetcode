class Solution:
    def findArray(self, pref: List[int]) -> List[int]:
        ans=[]
        x=0
        y=0
        for i in pref:
            y=x^i
            ans.append(y)
            x^=y
       
        return ans

        