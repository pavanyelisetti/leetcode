class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        unordered_map<int,int>mp;
        for(int i=0;i<arr.size();i++){
            mp[arr[i]]++;
        }
        vector<int>v;
        for(auto it:mp){
            v.push_back(it.second);
        }
        int s=0,c=0;
        sort(v.begin(),v.end());
        for(int i=0;i<v.size();i++){
            s+=v[i];
            if(s>k){
                c+=1;
            }
        }
        return c;

    }
};