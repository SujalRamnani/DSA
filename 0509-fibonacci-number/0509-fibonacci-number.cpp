class Solution {
public:
vector<int> dp;
int fibo(int n){
    if (n==0) return 0;
    if (n==1) return 1;
    if (dp[n]!=0) return dp[n];
    int ans=fibo(n-1)+fibo(n-2);
    dp[n]=ans;
    return ans;
}
    int fib(int n) {
        dp=vector<int>(n+1,0);
        int ans=fibo(n);
        return ans;
        
    }
};