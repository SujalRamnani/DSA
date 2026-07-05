class Solution {
public:
bool isCounter(char ch,char top){
    if (ch=='}' && top=='{') return true;
    if (ch==']' && top=='[') return true;
    if (ch==')' && top=='(') return true;
    return false;
}
    bool isValid(string s) {
        int n=s.length();
        stack<char> st;
        for(int i=0;i<n;i++){
            char ch=s[i];
            if (ch=='(' || ch=='{' || ch=='[') st.push(ch);
            else{
                if (st.size()==0) return false;
                char top=st.top();
                if (isCounter(ch,top)==true) st.pop();
                else return false;
            }
        }
        if (st.size()==0) return true;
        return false;
        
    }
};