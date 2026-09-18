class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        // vector<vector<int>> ans(m,vector<int>(n));
        // int indx=0;
        // if (original.size()!=m*n) return {};
        // for(int i=0;i<ans.size();i++){
        //     for(int j=0;j<ans[0].size();j++){
        //         ans[i][j]=original[indx];
        //         indx++;
        //     }
        // }
        // return ans;

     vector<vector<int>> ans(m,vector<int>(n));
     if (original.size()!=m*n) return {};
     for(int i=0;i<original.size();i++){
        int row=i/n;
        int col=i%n;

        ans[row][col]=original[i];
     }
     return ans;


    }
};