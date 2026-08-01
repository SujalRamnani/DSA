class Solution {
public:
    int maxOperations(vector<int>& arr, int k) {
        int n=arr.size();
        unordered_map<int,int> mp;
        int maxOperations=0;
        for(int i=0;i<n;i++){
            int remaining=k-arr[i];

            if (mp.find(remaining)!=mp.end() && mp[remaining]>0){
                  // remaining ko remove karo
               mp[remaining]--;
               maxOperations++;
            }
           else mp[arr[i]]++;   //increment karo //
        }
        return maxOperations;
    }
};