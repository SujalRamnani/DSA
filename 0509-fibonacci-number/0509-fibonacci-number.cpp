// class Solution {
// public:
// vector<int> dp;
// int fibo(int n){
    
//     if (n==0) return 0;
//     if (n==1) return 1;
//     if (dp[n]!=0) return dp[n]; ///0 nhi hai koi value hai toh usse ko return kardo
//     int ans=fibo(n-1)+fibo(n-2);
//     dp[n]=ans; ///dp mein ans ko store kardo///
//     return ans;
// }
//     int fib(int n) {
//     dp = vector<int>(n + 1, 0);  // Yahan initialize karo
//         int ans=fibo(n);
//         return ans;  
//     }
// };


class Solution {
public:

int fibo(int n,vector<int> &dp){
    if (n==0) return 0;
    if (n==1) return 1;
    if (dp[n]!=0) return dp[n]; ///0 nhi hai koi value hai toh usse ko return kardo
    int ans=fibo(n-1,dp)+fibo(n-2,dp);
    dp[n]=ans; ///dp mein ans ko store kardo///
    return ans;
}
    int fib(int n) {
    vector<int> dp(n+1,0);  // Yahan initialize karo
        int ans=fibo(n,dp);
        return ans;  
    }
};