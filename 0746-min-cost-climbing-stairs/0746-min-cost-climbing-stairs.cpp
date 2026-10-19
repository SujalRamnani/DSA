// class Solution {
// public:
// int helper(vector<int> &arr,int indx,vector<int> &dp){
//     int n=arr.size();
//     if (indx==n-1 || indx==n-2) return arr[indx];
//     if(dp[indx]!=-1) return dp[indx];
//     int cal1=helper(arr,indx+1,dp);
//     int cal2=helper(arr,indx+2,dp);
//     int ans=arr[indx]+min(cal1,cal2);
//     dp[indx]=ans;
   
//     return ans;
// }
//     int minCostClimbingStairs(vector<int>& arr) {
//         int n=arr.size();
//         ///here n is going for 0 or 1 to n-1 or n-2
//         vector<int> dp(n+1,-1);
//         int cal1=helper(arr,0,dp);int cal2=helper(arr,1,dp);
//         int ans=min(cal1,cal2);
//         return ans;
//     }
// };

class Solution {
public:

    int minCostClimbingStairs(vector<int>& arr) {
        int n=arr.size();
        ///here n is going for 0 or 1 to n-1 or n-2
        vector<int> dp(n+1,-1);
        dp[0]=arr[0];dp[1]=arr[1];
        for(int i=2;i<n;i++){
            dp[i]=arr[i]+min(dp[i-1],dp[i-2]);
        }
        return min(dp[n-1],dp[n-2]);
    }
};