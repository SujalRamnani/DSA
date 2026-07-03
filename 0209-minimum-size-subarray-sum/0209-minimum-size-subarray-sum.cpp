class Solution {
public:
    int minSubArrayLen(int target, vector<int>& arr) {
        //isme subarray ka length nhi diyaa hai matlab variable size hai
        int n=arr.size();
        int low=0,high=0;
        int result=INT_MAX;
        int sum=0;
        int minLen=INT_MAX;
        while(high<n){
            sum+=arr[high];
            while(sum>=target){
                int len=high-low+1;
                minLen=min(minLen,len);
                sum=sum-arr[low];
                low++;
            }
            high++;
        }
        if (minLen==INT_MAX) return 0;
        return minLen;
        
    }
};