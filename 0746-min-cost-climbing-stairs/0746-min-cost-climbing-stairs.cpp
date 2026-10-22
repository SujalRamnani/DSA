class Solution {
public:
int helper(vector<int> &arr,vector<int> &dp,int indx){
    int n=arr.size();
    if (indx==n-1) return arr[indx];
    if (indx==n-2) return arr[indx];

    if (dp[indx]!=-1) return dp[indx];
    int case1=arr[indx]+helper(arr,dp,indx+1);
    int case2=arr[indx]+helper(arr,dp,indx+2);
    int ans=min(case1,case2);
    dp[indx]=ans;
    return ans;
}
    int minCostClimbingStairs(vector<int>& arr) {
        int n=arr.size();
        if (n<=1) return n;
        vector<int> dp(n+1,-1);
        int case1=helper(arr,dp,0);
        int case2=helper(arr,dp,1);
        int ans=min(case1,case2);
        return ans;
        
    }
};