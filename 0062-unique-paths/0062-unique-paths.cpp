// class Solution {
// public:
// int helper(int cr,int cc,int er,int ec,vector<vector<int>> &dp){
//     if(cr>er || cc>ec) return  0;
//     if (cr==er && cc==ec) return 1;
//     if (dp[cr][cc]!=-1) return dp[cr][cc];
//     int rightWays=helper(cr,cc+1,er,ec,dp);
//     int downWays=helper(cr+1,cc,er,ec,dp);
//     dp[cr][cc]=rightWays+downWays;
//     return rightWays+downWays;

// }
//     int uniquePaths(int m, int n) {
//         vector<vector<int>> dp(m,vector<int>(n,-1));
//         int ans=helper(0,0,m-1,n-1,dp);
//         return ans;
        
//     }
// };


class Solution {
public:

    int uniquePaths(int m, int n) {
        vector<vector<int>> dp(m,vector<int>(n,-1));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if (i==0 || j==0) dp[i][j]=1;
               else dp[i][j]=dp[i-1][j]+dp[i][j-1];
            }
        }
        return dp[m-1][n-1];
        
        
    }
};