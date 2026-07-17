class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {
        int n=arr.size();
        vector<int> ans;
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++){
            int remaining=target-arr[i];
            if (mp.find(remaining)!=mp.end()) return {mp[remaining]+1,i+1};
            mp[arr[i]]=i;
        }
        return {};
        
    }
};