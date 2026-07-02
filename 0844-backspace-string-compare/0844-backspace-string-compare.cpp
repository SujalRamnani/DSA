class Solution {
public:
    bool backspaceCompare(string s, string t) {
        string ans1="";
        for(int i=0;i<s.length();i++){
           if (s[i]!='#') ans1.push_back(s[i]);
           else if (ans1.length()!=0 && s[i]=='#') ans1.pop_back();
        }

        string ans2="";
        for(int i=0;i<t.length();i++){
           if (t[i]!='#') ans2.push_back(t[i]);
           else if (ans2.length()!=0 && t[i]=='#') ans2.pop_back();
        }

        if (ans1==ans2) return true;
        return false;

    }
};