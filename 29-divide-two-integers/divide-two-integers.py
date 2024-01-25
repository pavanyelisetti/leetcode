import math
class Solution(object):
    def divide(self, dividend, divisor):
        """
        :type dividend: int
        :type divisor: int
        :rtype: int
        """
        x=dividend/divisor
        if x>=0:
            x=math.floor(x)
            if x>=2**31-1:
                x=2**31-1
        else:
            if dividend%divisor==0:
                return int(x)
            x=math.ceil(x)+1

        return int(x)
        