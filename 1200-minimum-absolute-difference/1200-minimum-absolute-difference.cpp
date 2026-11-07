class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        int n=arr.size();
         vector<vector<int>> ans;
         sort(arr.begin(),arr.end());
        int mini=INT_MAX;
         for(int i=0;i<n-1;i++){
           int diff=arr[i+1]-arr[i];
            mini=min(mini,diff); 
         }
          // Second pass: minimum difference wale pairs collect karo
          for(int i=0;i<n-1;i++){
              int diff=arr[i+1]-arr[i];
              if (diff==mini) ans.push_back({arr[i],arr[i+1]});
          }
         return ans;

    }
};