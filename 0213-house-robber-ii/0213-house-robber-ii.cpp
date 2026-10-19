class Solution {
public:
int helper(vector<int>& arr,vector<int>& dp,int i,int endIndx){
    if (i>endIndx) return 0;
    if(dp[i]!=-1) return dp[i];

    int take=arr[i]+helper(arr,dp,i+2,endIndx);//1st wala take fir i+2 se aage
    int skip=helper(arr,dp,i+1,endIndx); ///pehla wala skip 2nd element se start
    int ans=max(take,skip);
    dp[i]=ans;
    return ans;
    

}
    int rob(vector<int>& arr) {
        int n=arr.size();
        //dp ka sawal hai///
        if (n==0) return 0;
        if (n==1) return arr[0];
        vector<int> dp1(n+1,-1);

        int case1=helper(arr,dp1,0,n-2);
         vector<int> dp2(n+1,-1);
        int case2=helper(arr,dp2,1,n-1);
        int ans=max(case1,case2);
        return ans;
        
    }
};