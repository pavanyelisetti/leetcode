class Solution:
    def countSubstrings(self, s: str) -> int:
        c=0
        x=''
        for i in range(len(s)):
            x=''
            for j in range(i,len(s)):
                x+=s[j]
                if(x==x[::-1]):
                    c+=1
        return c
