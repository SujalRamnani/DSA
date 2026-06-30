class Solution {
public:
bool allZeros(unordered_map<char,int> &mp){
    for(auto it:mp){
        if (it.second!=0) return false;
    }
    return true;
}
    vector<int> findAnagrams(string s, string p) {
        int n=s.length();
        vector<int> ans;
        unordered_map<char,int> mp;
        for(int i=0;i<p.length();i++) mp[p[i]]++;
        int i=0,j=0;
        while(j<n){
            mp[s[j]]--;
            if (j-i+1==p.length()){
                if (allZeros(mp)) ans.push_back(i);
                mp[s[i]]++;
                i++;
            }
            j++;
        }
        return ans;
    }
};