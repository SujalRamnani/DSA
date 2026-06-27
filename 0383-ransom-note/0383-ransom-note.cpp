class Solution {
public:
    bool canConstruct(string a, string b) {
        //kya string b se hum a ko bana sakte hai agar haan toh return true varna return false
        unordered_map<char,int> mp;
        for(int i=0;i<b.length();i++) mp[b[i]]++; 
    
        for(int i=0;i<a.length();i++){
            if (mp[a[i]]==0) return false;
           else mp[a[i]]--;
        }
        return true;
        
    }
};