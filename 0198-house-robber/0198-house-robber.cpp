class Solution {
public:
int helper(vector<int> &arr,vector<int> &dp,int n,int i,int end){
    if (i>=n) return 0;
    if (dp[i]!=-1) return dp[i];
    int take=arr[i]+helper(arr,dp,n,i+2,end);
    int skip=helper(arr,dp,n,i+1,end);
    int ans=max(take,skip);
    dp[i]=ans;
    return ans;
}
    int rob(vector<int>& arr) {
        int n=arr.size();
        vector<int> dp(n+1,-1);
        int ans=helper(arr,dp,n,0,n-1);
        return ans;
        
    }
};