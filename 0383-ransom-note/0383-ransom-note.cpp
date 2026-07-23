class Solution {
public:
    bool canConstruct(string a, string b) {

        int m=a.length();int n=b.length();
        unordered_map<char,int> mp;
        for(int i=0;i<n;i++) mp[b[i]]++;

        for(int i=0;i<m;i++){
            if (mp.find(a[i])==mp.end()) return false;
            mp[a[i]]--;
            if (mp[a[i]]<0) return false; 
        }
        return true;
        
    }
};