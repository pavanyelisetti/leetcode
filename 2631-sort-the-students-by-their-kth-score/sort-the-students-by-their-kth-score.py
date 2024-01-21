class Solution:
    def sortTheStudents(self, score: List[List[int]], k: int) -> List[List[int]]:
        x=[]
        for i in range(len(score)):
            ans=[]
            ans.append(score[i][k])
            ans.append(i)
            x.append(ans)
        x=sorted(x)
        print(x)
        ans=[]
        for i in x:
            ans.append(score[i[1]])
        return ans[::-1]

        