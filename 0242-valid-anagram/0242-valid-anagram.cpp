class Solution {
public:
    bool isAnagram(string s, string t) {
        // unordered_map<char,int> mp;
        // if (s.length()!=t.length()) return false;
        // for(int i=0;i<s.length();i++) mp[s[i]]++;
        // for(int i=0;i<t.length();i++){
        //     if(mp.find(t[i])==mp.end()) return false;
        //     mp[t[i]]--;
        //     if (mp[t[i]]<0) return false;
        // }
        // return true;
        if (s.length()!=t.length()) return false;
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        for(int i=0;i<s.length();i++){
            if (s[i]!=t[i]) return false;
        }
        return true;
    }
};