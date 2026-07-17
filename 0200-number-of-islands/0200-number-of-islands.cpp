class Solution {
public:
void dfs(vector<vector<char>>& arr,int i,int j){
     int m=arr.size();
        int n=arr[0].size();
        if (i<0 || i>=m || j<0 || j>=n || arr[i][j]!='1') return;
        if (arr[i][j]==-1) return;

        arr[i][j]='$';
        dfs(arr,i-1,j);
        dfs(arr,i+1,j);
        dfs(arr,i,j-1);
        dfs(arr,i,j+1);

}
    int numIslands(vector<vector<char>>& arr) {
        int m=arr.size();
        int n=arr[0].size();
        int count=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if (arr[i][j]=='1'){
                    dfs(arr,i,j);
                    count++;
                }
            }
        }
        return count;
        
    }
};