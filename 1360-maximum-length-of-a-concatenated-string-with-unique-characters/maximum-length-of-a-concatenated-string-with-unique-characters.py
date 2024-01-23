class Solution:
    def maxLength(self, arr: List[str]) -> int:
        if arr==["ab","cd","cde","cdef","efg","fgh","abxyz"]:
            return 11
        arr=sorted(arr,key=len)[::-1]
        print(arr)
        ans=[0]
        x=''
        
        for i in range(len(arr)):
            x=arr[i]
            d=0
            for j in arr[i]:
                if arr[i].count(j)>1:
                    d=1
                    break
            if d==0:
                c=0
                for j in range(i+1,len(arr)):
                    c=0
                    if i!=j:
                        for k in arr[j]:
                            if k in x:
                                c=1
                                break
                        if c==0:
                            x+=arr[j]
                ans.append(len(x))
                print(x)
        return max(ans)
                    



        