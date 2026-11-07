class Solution {
public:
    int minSwaps(string s) {
        int n=s.length();
        stack<char> st;
        for(int i=0;i<n;i++){
            char ch=s[i];
            if (ch=='[') st.push(ch);
                
            else{
                if (st.size()==0 || st.top()==']') st.push(ch);
                else st.pop();
            }
        }
        int totalBrackets=st.size();
        int closedBrackets=(totalBrackets)/2;
        return (closedBrackets+1)/2;
        
    }
};