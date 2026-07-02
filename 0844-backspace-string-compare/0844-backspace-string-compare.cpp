class Solution {
public:
    bool backspaceCompare(string s, string t) {
        // string ans1="";
        // for(int i=0;i<s.length();i++){
        //    if (s[i]!='#') ans1.push_back(s[i]);
        //    else if (ans1.length()!=0 && s[i]=='#') ans1.pop_back();
        // }

        // string ans2="";
        // for(int i=0;i<t.length();i++){
        //    if (t[i]!='#') ans2.push_back(t[i]);
        //    else if (ans2.length()!=0 && t[i]=='#') ans2.pop_back();
        // }

        // if (ans1==ans2) return true;
        // return false;

        stack<char> st1;
        for(int i=0;i<s.length();i++){
           if (s[i]!='#') st1.push(s[i]);
           else if (st1.size()!=0 && s[i]=='#') st1.pop();

        }

        
        stack<char> st2;
        for(int i=0;i<t.length();i++){
           if (t[i]!='#') st2.push(t[i]);
           else if (st2.size()!=0 && t[i]=='#') st2.pop();
        }
       
        while(st1.size()!=0 && st2.size()!=0 ){
            if (st1.top()!=st2.top()) return false;
            st1.pop();
            st2.pop();
        }

        if (st1.size()==0 && st2.size()==0) return true;
        return false;



    }
};