class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& a, vector<vector<int>>& b) {
    //   int i=0,j=0;
    //   int m=a.size();
    //   int n=b.size();
    //   vector<vector<int>>  ans;
    //   while(i<m && j<n){
    //     if (a[i][0]<b[j][0]){
    //         ans.push_back(a[i]);
    //         i++;

    //     }
    //     else if (b[j][0]<a[i][0]){
    //         ans.push_back(b[j]);
    //         j++;
    //     }
    //     else{
    //         ans.push_back({a[i][0],a[i][1]+b[j][1]});
    //         i++;
    //         j++;
    //     }
    //   } 
    //   while(i<m) {
    //      ans.push_back(a[i]);
    //         i++;
    //   } 
    //   while(j<n){
    //       ans.push_back(b[j]);
    //         j++;
    //   }
    //    return ans; 

vector<vector<int>>  ans;
    unordered_map<int,int> mp;
    int m=a.size();
      int n=b.size();
    for(int i=0;i<m;i++){
        int id=a[i][0];
        int value=a[i][1];

        mp[id]+=value;
    }

    for(int i=0;i<n;i++){
         int id=b[i][0];
        int value=b[i][1];

        mp[id]+=value;
    }
    for(auto it:mp){
        int key=it.first;
        int value=it.second;

        ans.push_back({key,value});
    }
    sort(ans.begin(),ans.end());
    return ans;
    }
};