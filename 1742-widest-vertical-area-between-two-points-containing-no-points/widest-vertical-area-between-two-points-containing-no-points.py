class Solution:
    def maxWidthOfVerticalArea(self, points: List[List[int]]) -> int:
        points=sorted(points)
        print(points)
        max=0
        for i in range(len(points)-1):
            x=points[i+1][0]-points[i][0]
            if max<=x:
                max=x
        return max
            
        