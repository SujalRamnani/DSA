class Solution {
public:
    int subarraysDivByK(vector<int>& arr, int k) {
        int n=arr.size();
        int count=0;
        int sum=0;
        unordered_map<int,int> mp;
        mp[0]=1; ///0 ko ek baar dekha tha 
        for(int i=0;i<n;i++){
            sum+=arr[i];
            int remaining=sum%k;
          if (remaining<0) remaining+=k;
            if (mp.find(remaining)!=mp.end()) count+=mp[remaining];
            mp[remaining]++;
        }
        return count;
        
    }
};