class Solution {
public:
    int subarraySum(vector<int>& arr, int k) {
        int n=arr.size();
        int count=0;
        unordered_map<int,int> mp;
        mp[0]=1; //empty subarray
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=arr[i];
            int remaining=sum-k;
            if (mp.find(remaining)!=mp.end()){
                count+=mp[remaining];
            }
            mp[sum]++; //map mein sum ko dalte jao//
        }
        return count;
        
    }
};