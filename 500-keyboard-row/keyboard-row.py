class Solution:
    def findWords(self, words: List[str]) -> List[str]:
        a="qwertyuiop"
        b="asdfghjkl"
        c="zxcvbnm"
        ans=[]
        for i in words:
            c3=0
            c1=0
            c2=0
            x=i.lower()
            for j in x:
                if j in a:
                    c1+=1
                if j in b:
                    c2+=1
                if j in c:
                    c3+=1
            if(c3==len(i) or c1==len(i) or c2==len(i)):
                ans.append(i)
        return ans;
