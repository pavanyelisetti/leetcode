class Solution:
    def uniqueOccurrences(self, arr: List[int]) -> bool:
        x=list(set(arr))
        ans=[]
        for i in x:
            ans.append(arr.count(i))
        ans=sorted(ans)
        print(ans)
        for i in range(len(ans)-1):
            if ans[i]==ans[i+1]:
                return False
        return True
        
        