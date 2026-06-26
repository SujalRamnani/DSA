class Solution {
public:
    int minSubArrayLen(int target, vector<int>& arr) {
        int n=arr.size();
        int low=0;int minLen=INT_MAX;
        int sum=0;
        for(int high=0;high<n;high++){
            sum+=arr[high];
            while(sum>=target){
                int len=high-low+1;
                minLen=min(len,minLen);
                sum-=arr[low];
                low++;
            }

        }
        if (minLen==INT_MAX) return 0;
        return minLen;
        
    }
};