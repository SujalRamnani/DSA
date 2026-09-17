class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& arr) {
        int m=arr.size();
         int n=arr[0].size();
        
          unordered_map<int,vector<int>> mp;
          for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                mp[i-j].push_back(arr[i][j]);
            }
          }

          for(auto &it:mp){
            sort(it.second.begin(),it.second.end());
          }

          for(int i=m-1;i>=0;i--){
            for(int j=n-1;j>=0;j--){
                arr[i][j]=mp[i-j].back();
                mp[i-j].pop_back();
            }
          }
return arr;
    }
};