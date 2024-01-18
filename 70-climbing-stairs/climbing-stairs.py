class Solution:
    def climbStairs(self, n: int) -> int:
        if n==1:
            return 1
        if(n==2):
            return 2
        if(n>2):
            a=1
            b=2
            for i in range(3,n+1):
                sum=a+b
                a=b
                b=sum
            return sum
        