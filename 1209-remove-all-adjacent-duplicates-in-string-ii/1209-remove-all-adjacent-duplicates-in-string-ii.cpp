class Solution {
public:
    string removeDuplicates(string s, int k) {
        int n=s.length();
        stack<pair<char,int>> st;
        for(int i=0;i<n;i++){
            char ch=s[i];
            if (st.size()==0) st.push({ch,1});
            else if (st.top().first==ch){
                st.top().second++;
                if (st.top().second==k) st.pop();
                
            }
            else st.push({ch,1});
        }
        string ans="";
        while(st.size()!=0){
            for(int i=0;i<st.top().second;i++) ans.push_back(st.top().first);
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};