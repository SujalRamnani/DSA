class Solution {
public:
    string decodeString(string s) {
        int n=s.length();
        stack<char> st;
        for(int i=0;i<n;i++){
            char ch=s[i];
            if (ch!=']') st.push(ch);
            else{
                //abb ye ']' aya
                string ans="";
                while(st.top()!='['){
                    ans.push_back(st.top());
                    st.pop();

                }
                reverse(ans.begin(),ans.end());
                st.pop();
                string temp;
                while(st.size()!=0 && isdigit(st.top())){
                    temp.push_back(st.top());
                    st.pop();
                }
                reverse(temp.begin(),temp.end());
                string k;
                int no=stoi(temp);
                for(int i=0;i<no;i++) k.append(ans);
                for(char ch:k) st.push(ch);
            }
        }
          string ans;
        while(st.size()!=0){
            ans.push_back(st.top());
            st.pop();

        }
        reverse(ans.begin(),ans.end());
        return ans;
        
    }
};