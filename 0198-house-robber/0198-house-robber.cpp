class Solution {
public:
int fun(vector<int>& arr,int n,int i,int free,  vector<vector<int>> &dp){
    if (i==n) return 0;
    if (dp[i][free]!=-1) return dp[i][free];
    if (free==0){
        return dp[i][free]=fun(arr,n,i+1,1,dp);
    }
    int choice1=arr[i]+fun(arr,n,i+1,0,dp);
    int choice2=fun(arr,n,i+1,1,dp);
    int ans=max(choice1,choice2);
    dp[i][free]=ans;
    return ans;


}
    int rob(vector<int>& arr) {
        int n=arr.size();
        //2 choice hogi ek hoga free aur dusra hoga i
        vector<vector<int>> dp(n);
        for(int i=0;i<n;i++){
            vector<int> t(2,-1); //isse ek 2d array banke taiyar hogya
            //i=0 ke liye free kuch i=1 ke liye free kuch
            dp[i]=t;
        }
        int ans=fun(arr,n,0,1,dp);
        return ans; 
    }
};