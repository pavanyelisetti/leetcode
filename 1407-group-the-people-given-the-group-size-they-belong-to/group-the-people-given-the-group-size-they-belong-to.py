class Solution:
    def groupThePeople(self, groupsizes: List[int]) -> List[List[int]]:
        x=list(set(groupsizes))
        final=[]
        ans=[]
        for i in x:
            ans1=[]
            for j in range(len(groupsizes)):
                if i==groupsizes[j]:
                    ans1.append(j)
            ans.append(ans1)
        
        for i in ans:
            if len(i)==groupsizes[i[0]]:
                final.append(i)
            else:
                q=len(i)//groupsizes[i[0]]
                for j in range(0,len(i)-groupsizes[i[0]]+1,groupsizes[i[0]]):
                    final.append(i[j:j+groupsizes[i[0]]])
        print(final)
        return final


        