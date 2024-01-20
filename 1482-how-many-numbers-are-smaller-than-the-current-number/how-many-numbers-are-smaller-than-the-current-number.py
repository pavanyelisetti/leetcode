class Solution:
    def smallerNumbersThanCurrent(self, a: List[int]) -> List[int]:
        ans=[]
        for i in range(len(a)):
            c=0
            for j in range(len(a)):
                if i!=j:
                    if(a[i]>a[j]):
                        c+=1
            ans.append(c)
        return ans
        