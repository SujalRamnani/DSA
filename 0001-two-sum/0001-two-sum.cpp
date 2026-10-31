class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {
        int n=arr.size();
        //indices return karna hai toh sort nhi kar sakte apan
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++){
            int remaining=target-arr[i];
            if (mp.find(remaining)!=mp.end()){
                return {mp[remaining],i};

            }
            mp[arr[i]]=i;
        }
        return {};
    }
};