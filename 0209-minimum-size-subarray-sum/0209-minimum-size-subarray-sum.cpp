class Solution {
public:
    int minSubArrayLen(int target, vector<int>& arr) {
        int n=arr.size();
        //ye variable length sliding window ka sawal hai
        int low=0,high=0;
        int minLen=INT_MAX;
        int sum=0;
        while(high<n){
            sum+=arr[high];
            while(sum>=target){
                  
                sum-=arr[low];
                low++;
            }
            if (sum==target){
               
            }

          
            high++;

        }
        if (minLen==INT_MAX) return 0;
       return minLen; 
    }
};