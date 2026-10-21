class Solution {
public:
int helper(vector<int>& arr,int n,vector<int>& dp,int i){
     if (i==n-1 || i==n-2) return arr[i];
    if (dp[i]!=-1) return dp[i];

    int ans=arr[i]+min(helper(arr,n,dp,i+1),helper(arr,n,dp,i+2));
    dp[i]=ans;
    return ans;
    
}
    int minCostClimbingStairs(vector<int>& arr) {
        int n=arr.size();
        if (n==0) return 0;

        vector<int> dp(n+1,-1);
        int case1=helper(arr,n,dp,0);
        int case2=helper(arr,n,dp,1);
        return min(case1,case2);
       
        
    }
};