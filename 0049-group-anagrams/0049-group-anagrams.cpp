class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& arr) {
        int n=arr.size();
        vector<vector<string>> ans;
        unordered_map<string,vector<string>> mp;
        for(int i=0;i<n;i++){
            string s=arr[i];
            sort(s.begin(),s.end());
            mp[s].push_back(arr[i]);

        }
        for(auto it:mp) ans.push_back(it.second);
        return ans;

        
    }
};