class Solution {
public:
    int numberOfSteps(int num) {
        int i=0;
        if(num%2==1)
        {
            i=1;
            num-=1;
        }
        while(num!=0)
        {
            num=num>>1;
            if(num%2==1)
            {
                num-=1;
                i+=1;
            }
            i+=1;
        }
        return i;
    }
};