class Solution {
public:
    int minSubArrayLen(int target, vector<int>& arr) {
        int n=arr.size();
        int low=0,high=0;
        int sum=0;
        int minLen=INT_MAX;
        while(high<n){
            sum+=arr[high];
            while (sum>=target){
                  minLen=min(minLen,high-low+1);
                sum-=arr[low];
                low++;
               
            }
            
            high++;

        }
        if (minLen==INT_MAX) return 0;
        return minLen;
        
    }
};