class Solution {
public:
int helper(vector<int> &arr,vector<int> &dp,int i){
    if (i>=arr.size()) return 0;
    if (dp[i]!=-1) return dp[i]; 
    int take=arr[i]+helper(arr,dp,i+2);
    int skip=helper(arr,dp,i+1);
    int ans=max(take,skip);
    dp[i]=ans;
    return ans;
}
    int rob(vector<int>& arr) {
        int n=arr.size();
        vector<int> dp(n+1,-1);
        int ans=helper(arr,dp,0);
        return ans;
        
    }
};