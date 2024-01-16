/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        int left = 1;
        int right = n;
        int mid = left  + (right-left)/2;
        while(left < right)
        {
            int ans = guess(mid);
            if(ans== 0)return mid;
            else if(ans == -1)
            {
                right = mid-1; 
            } 
            else{
                left = mid + 1;
            }
            mid = left + (right-left)/2;
        }
        return mid ; 
        
    }
};