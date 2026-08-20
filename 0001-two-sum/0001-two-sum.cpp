class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {
        // int n=arr.size();
        // for(int i=0;i<n;i++){
        //     for(int j=i+1;j<n;j++){
        //         if (arr[i]+arr[j]==target) return {i,j};
        //     }
        // }
        // return {};

        int n=arr.size();
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++){
            int remaining=target-arr[i];
            if (mp.find(remaining)!=mp.end()) return {i,mp[remaining]};
            mp[arr[i]]=i;
        }
        return {};
    }
};