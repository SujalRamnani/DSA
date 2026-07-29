class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& a, vector<vector<int>>& b) {
      int i=0,j=0;
      int m=a.size();
      int n=b.size();
      vector<vector<int>>  ans;
      while(i<m && j<n){
        if (a[i][0]<b[j][0]){
            ans.push_back(a[i]);
            i++;

        }
        else if (b[j][0]<a[i][0]){
            ans.push_back(b[j]);
            j++;
        }
        else{
            ans.push_back({a[i][0],a[i][1]+b[j][1]});
            i++;
            j++;
        }
      } 
      while(i<m) {
         ans.push_back(a[i]);
            i++;
      } 
      while(j<n){
          ans.push_back(b[j]);
            j++;
      }
       return ans; 
    }
};