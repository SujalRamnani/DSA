class Solution {
public:
    string removeDuplicates(string s) {
        int n=s.length();
        stack<char> st;
        for(int i=0;i<n;i++) {
            char ch=s[i];
            if (st.size()!=0 && st.top()==ch) st.pop();
           else st.push(ch);
        
        }
        string ans="";
        while(st.size()!=0){
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
        
    }
};