// class Solution {
// public:
// int helper(int n,vector<int> &dp){
//     if (n==0) return 0;
//     if (n==1) return 1;
//     if (n==2) return 1;
//     if (dp[n]!=0) return dp[n];
//     int ans=helper(n-1,dp)+helper(n-2,dp);
//     dp[n]=ans;
//     return ans;
// }
//     int fib(int n) {
//         vector<int> dp(n+1,0);
//         int ans=helper(n,dp);
//         return ans;
        
//     }
// };


//memorization
class Solution {
public:

    int fib(int n) {
        vector<int> dp(n+1,0);
        if (n==0) return 0;if (n==1) return 1;
       dp[0]=0;dp[1]=1;
       for(int i=2;i<=n;i++){
        dp[i]=dp[i-1]+dp[i-2];
       }
       return dp[n];
        
    }
};
