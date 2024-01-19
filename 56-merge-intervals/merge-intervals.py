class Solution:
    def merge(self, intervals: List[List[int]]) -> List[List[int]]:
        ans=[]
        i=0
        intervals=sorted(intervals)
        c=0
        x=0
        while(x!=1):
            c=0
            ans=[]
            i=0
            while(i<len(intervals)-1):
                temp=[]
                if(intervals[i+1][0]>=intervals[i][0] and intervals[i+1][1]<=intervals[i][1]):
                    temp.append(intervals[i][0])
                    temp.append(intervals[i][1])
                    ans.append(temp)
                    c=1
                    i+=1
                elif(intervals[i+1][0]<=intervals[i][0] and intervals[i+1][1]>=intervals[i][1]):
                    temp.append(intervals[i+1][0])
                    temp.append(intervals[i+1][1])
                    ans.append(temp)
                    c=1
                    i+=1
                elif(intervals[i][1]>=intervals[i+1][0] and intervals[i][1]<=intervals[i+1][1]):
                    temp.append(intervals[i][0])
                    temp.append(intervals[i+1][1])
                    ans.append(temp)
                    c=1
                    i+=1
                elif(intervals[i][0]<intervals[i+1][0] and intervals[i][1]<intervals[i+1][1]):
                    ans.append(intervals[i])
                i+=1  
            if i==len(intervals)-1:
                ans.append(intervals[i])
            if intervals==ans:
                x=1
            intervals=ans
            print(intervals)
            
        return ans


        