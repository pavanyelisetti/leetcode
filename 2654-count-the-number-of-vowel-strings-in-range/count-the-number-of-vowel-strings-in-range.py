class Solution:
    def vowelStrings(self, words: List[str], left: int, right: int) -> int:
        c=0
        while(left<=right):
            if words[left][0] in "aeiouAEIOU" and words[left][-1] in "AEIOUaeiou":
                c+=1
            left+=1
        return c

        