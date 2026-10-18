class Solution {
public:
    int sumOfUnique(vector<int>& arr) {
        int n=arr.size();
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++) mp[arr[i]]++;
vector<int> ans;
        for(auto it:mp){
            if (it.second==1) ans.push_back(it.first);
        }

        int sum=0;
        for(int i=0;i<ans.size();i++) sum+=ans[i];
        return sum;
        
    }
};