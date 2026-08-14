class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {
        // int n=arr.size();
        // unordered_map<int,int> mp;
        // for(int i=0;i<n;i++){
        //     int remaining=target-arr[i];
        //     if (mp.find(remaining)!=mp.end()) return {mp[remaining]+1,i+1};
        //     mp[arr[i]]=i;
        // }
        // return {};

        int n=arr.size();
        int i=0,j=n-1;
        while(i<=j){
            if (arr[i]+arr[j]==target) return {i+1,j+1};
            else if (arr[i]+arr[j]>target) j--;
            else i++;
        }
        return {};
        
    }
};