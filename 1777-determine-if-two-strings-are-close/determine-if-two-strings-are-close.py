class Solution:
    def closeStrings(self, word1: str, word2: str) -> bool:
        x=set(word1)
        y=set(word2)
        for i in x:
            if i not in y:
                return False
        l=[]
        m=[]
        for i in x:
            l.append(word1.count(i))

        for i in y:
            m.append(word2.count(i))
        if sorted(l)==sorted(m):
            return True
        else:
            return False

        