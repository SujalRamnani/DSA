class Solution {
public:
int fun(vector<int>& arr,int i,int prev,vector<vector<int>> &dp){
      int n=arr.size();
    if (i==n) return 0;
    if (dp[i][prev+1]!=-1) return dp[i][prev+1];
    if (prev==-1 || arr[i]>arr[prev]){ //prev index store karta hai
        int choice1=1+fun(arr,i+1,i,dp); ///le leta hu toh length 1 se badhega
        int choice2=fun(arr,i+1,prev,dp); //nhi liya maine toh pehele wala prev hi iska prev hoga
        int ans=max(choice1,choice2);
        dp[i][prev+1]=ans;
        return ans;
    }
    //agar if conditon nhi hua satisfity matlab prev==-1 nhi hai ya fir prev>arr[i] toh aage badh jao
    return dp[i][prev+1]=fun(arr,i+1,prev,dp);

}
    int lengthOfLIS(vector<int>& arr) {
        int n=arr.size();
        int prev=-1;
        vector<vector<int>> dp(n+1,vector<int>(n+1,-1));
        int ans=fun(arr,0,prev,dp);
        return ans;
        
    }
};