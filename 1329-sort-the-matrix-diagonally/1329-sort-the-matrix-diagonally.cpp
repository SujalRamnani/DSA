class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& arr) {
        unordered_map<int,vector<int>> mp;
        for(int i=0;i<arr.size();i++){
            for(int j=0;j<arr[0].size();j++){
                mp[i-j].push_back(arr[i][j]);
            }
        }
        for(auto &it:mp){
            sort(it.second.begin(),it.second.end());
        }
     
     for(int i=arr.size()-1;i>=0;i--){
        for(int j=arr[0].size()-1;j>=0;j--){
            arr[i][j]=mp[i-j].back();
            mp[i-j].pop_back();
        }
     }

        return arr;
    }
};