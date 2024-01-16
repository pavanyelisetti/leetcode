class Solution {
public:
 void solve(vector<int>& nums, int i, int& total, vector<int>& arr){
        //base case
        if(i >= nums.size()){
            int tempXor = 0;
            for(int j=0; j<arr.size(); j++){
                tempXor ^= arr[j];
            }
            total += tempXor;
            return;
        }

        //include wala case
        arr.push_back(nums[i]);
        solve(nums, i+1, total, arr);
        arr.pop_back();

        //exclude wala case
        solve(nums, i+1, total, arr);
    }


    int subsetXORSum(vector<int>& nums) {
        int total = 0, i = 0;
        vector<int> arr;
        solve(nums, i, total, arr);
        return total;
    }
  
};