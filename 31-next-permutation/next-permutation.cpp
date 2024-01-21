class Solution {
public:
    void nextPermutation(vector<int>& arr) {
        int ind =-1;
        for(int i=arr.size()-2;i>=0;i--){
            if(arr[i]<arr[i+1]){
                ind =i;
                break;
            }
        }
        // if ind==-1 means its is last permutation so in this case return the first permutation i.e. reverse of last  
        if(ind==-1){
            reverse(arr.begin(),arr.end());
            return;
        }
        

        // Step 2: Swap the breakpoint with the minimum value on its right part
        for(int i=arr.size()-1;i>ind;i--){
            if(arr[i]>arr[ind]){
                swap(arr[ind],arr[i]);
                break;
            }
        }
        
        // Step 3: Just add the right part in the increasing order (as it is in decresing order given so just revese it and it will become in increasing order)
        reverse(arr.begin()+ind+1,arr.end());
        
    }
};