class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& arr) {
        int n=arr.size();
          vector<vector<string>> ans;
          unordered_map<string,vector<string>> mp;
          for(int i=0;i<n;i++){
            string temp=arr[i];
            sort(temp.begin(),temp.end());
            mp[temp].push_back(arr[i]); //ek string ke corresponding vector uska sorted string ke corresponding
          }

          for(auto it:mp){
            ans.push_back(it.second);
          }
          return ans;
    }
};