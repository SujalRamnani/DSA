class Solution {
public:
    int findDuplicate(vector<int>& arr) {
        int n=arr.size();
        sort(arr.begin(),arr.end());
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++) mp[arr[i]]++;
        for(auto it:mp){
            if (it.second>1) return it.first;
        }
        return -1;
        
    }
};