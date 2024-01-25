class Solution:
    def getPermutation(self, n: int, k: int) -> str:
        x=sorted(list(permutations(range(1,n+1))))
      
        c=x[k-1]

        ans=''
        for i in c:
            ans+=str(i)
        return ans
        