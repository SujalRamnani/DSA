class Solution {
public:
int fun(string &s1,string &s2,int m,int n,int i,int j,vector<vector<int>> &dp){
    if (i==m || j==n) return 0;
    if (dp[i][j]!=-1) return dp[i][j];
    if (s1[i]==s2[j]){
     return   dp[i][j]=1+fun(s1,s2,m,n,i+1,j+1,dp);
    }
    int choice1=fun(s1,s2,m,n,i,j+1,dp);  //i as it is aur j ko badha diyaa
    int choice2=fun(s1,s2,m,n,i+1,j,dp); //i+1 kardiya aur j as it is
    int ans=max(choice1,choice2);
    dp[i][j]=ans;
    return ans;


}
    int longestCommonSubsequence(string s1, string s2) {
        int m=s1.length();
        int n=s2.length();
        //i aur j 2 chizze change ho rahe hai toh 2d dp bana doo
        vector<vector<int>> dp(m+1,vector<int>(n+1,-1));

        int ans=fun(s1,s2,m,n,0,0,dp);
        return ans;
        
    }
};