class Solution {
public:
    long long maximumSubarraySum(vector<int>& arr, int k) {
     
        //fixed size subarray length deke rakha hai fixed length sliding window
        //aur elements disticnt ke liye map use kardenge
        int n=arr.size();
        int low=0,high=k-1;
        unordered_map<int,int> mp;
        for(int i=low;i<=high;i++) mp[arr[i]]++;

        long long sum=0;
        for(int i=low;i<=high;i++) sum+=arr[i];
           long long maxSum=INT_MIN;
 if(mp.size()==k) maxSum=max(maxSum,sum);
           while(high<n){
            mp[arr[low]]--;
            if (mp[arr[low]]==0) mp.erase(arr[low]);
            low++;
            high++;

             if(high==n) break;
             sum-=arr[low-1];
            sum += arr[high];
             mp[arr[high]]++;
             if(mp.size()==k) maxSum=max(maxSum,sum);
            }

           if (maxSum==INT_MIN) return 0;
              return maxSum;
        
    }
};