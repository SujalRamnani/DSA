class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& arr) {
        vector<vector<string>> ans;
        unordered_map<string,vector<string>> mp;
        int n=arr.size();
        for(int i=0;i<n;i++){
            string curr=arr[i];
            sort(curr.begin(),curr.end());
            mp[curr].push_back(arr[i]);
        }

        for(auto it:mp){
            ans.push_back(it.second);
        }
        return ans;
        
    }
};