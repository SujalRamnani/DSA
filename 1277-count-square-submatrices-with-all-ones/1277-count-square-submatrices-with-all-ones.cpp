class Solution {
public:
    int countSquares(vector<vector<int>>& arr) {
        int m=arr.size();int n=arr[0].size();
        vector<vector<int>> dp(m,vector<int>(n,0));

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if (i==0 && j==0) dp[i][j]=arr[i][j];
                else if (i==0 && arr[i][j]==1) dp[i][j]=arr[i][j]; ///iske liye sirf current hi check hoga
                else if (j==0 && arr[i][j]==1) dp[i][j]=arr[i][j]; ///iske liye sirf current hi check hoga

                else {
                    if (arr[i][j]!=0)
                    dp[i][j]=1+min(min(dp[i-1][j],dp[i][j-1]),dp[i-1][j-1]);
                }
            }
        }
        

        int sum=0;
        for(int i=0;i<dp.size();i++){
            for(int j=0;j<dp[0].size();j++){
                sum+=dp[i][j];
            }
        }

return sum;

        
    }
};