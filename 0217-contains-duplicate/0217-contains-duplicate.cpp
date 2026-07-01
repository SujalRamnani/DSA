class Solution {
public:
    bool containsDuplicate(vector<int>& arr) {
        int n=arr.size();
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++) mp[arr[i]]++;

        for(auto it:mp){
            if (it.second>1) return true;
        }
        return false;
        
    }
};