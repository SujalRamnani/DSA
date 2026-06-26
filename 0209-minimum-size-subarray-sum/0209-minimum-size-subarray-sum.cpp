class Solution {
public:
    int minSubArrayLen(int target, vector<int>& arr) {
        int n=arr.size();
        int minLen=INT_MAX;
        int low=0,high=0;
        int sum=0;
        while(high<n){
            sum=sum+arr[high];
            while(sum>=target){
                int len=high-low+1;
                minLen=min(minLen,len);
                //abb fire karte jao
                sum=sum-arr[low];
                low++;
            }
            high++;

        }
        if (minLen==INT_MAX) return 0;
        return minLen;
    }
};