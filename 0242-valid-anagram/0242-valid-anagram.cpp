class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char,int> mp;
        sort(t.begin(),t.end());
        sort(s.begin(),s.end());
        if (s.length()!=t.length()) return false;
        for(int i=0;i<s.length();i++) mp[s[i]]++;
        for(int i=0;i<t.length();i++){
            if(mp.find(t[i])==mp.end()) return false;
            mp[t[i]]--;
            if (mp[t[i]]<0) return false;
        }
        return true;
    }
};