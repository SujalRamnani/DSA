class Solution {
public:
    bool backspaceCompare(string s, string t) {
        int m=s.length();
        int n=t.length();
        stack<char> st1;
         stack<char> st2;

      for(int i=0;i<m;i++){
        if (s[i]=='#'){
            if (st1.size()!=0) st1.pop();
        }
        else st1.push(s[i]);
      }   

      for(int i=0;i<n;i++){
        if (t[i]=='#'){
             if (st2.size()!=0) st2.pop();
        }
        else st2.push(t[i]);
      } 

      string ans1;
      while(st1.size()!=0){
        ans1.push_back(st1.top());
        st1.pop();
      } 

       string ans2;
      while(st2.size()!=0){
        ans2.push_back(st2.top());
        st2.pop();
      }

     
      if (ans1==ans2) return true;
      return false;   
    
    }
};