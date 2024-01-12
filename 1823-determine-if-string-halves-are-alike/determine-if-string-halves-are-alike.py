class Solution:
    def halvesAreAlike(self, s: str) -> bool:
        c=0
        c1=0
        x=s[0:len(s)//2]
        y=s[len(s)//2:]
        for i in "aeiouAEIOU":
            if i in x:
                c+=x.count(i)
            if i in y:
                c1+=y.count(i)
        if c==c1:
            return 1
        return 0
        