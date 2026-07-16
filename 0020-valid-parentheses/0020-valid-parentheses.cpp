class Solution {
public:
bool isCounter(char top,char ch){
    if (top=='[' && ch==']') return true;
   else if (top=='{' && ch=='}') return true;
   else if (top=='(' && ch==')') return true;
    return false;
}
    bool isValid(string s) {
        int n=s.length();
        stack<char> st;
        for(int i=0;i<n;i++){
            char ch=s[i];
            if (ch=='{' || ch=='[' || ch=='(') st.push(ch);
            else{ //ulte characters aye agar aur stack ka size khali hai
                if (st.size()==0) return false;
                char top=st.top();
                if (isCounter(top,ch)) st.pop();
               else return false;
            }
        }
        if (st.size()==0) return true;
        return false;
        
    }
};