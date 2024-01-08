class Solution {
public:
    int xorOperation(int n, int start) {
        int k=1;
        int x=0;
        for(int i=start;k<=n;i+=2)
        {
            x^=i;
            k++;
        }
        return x;
    }
};