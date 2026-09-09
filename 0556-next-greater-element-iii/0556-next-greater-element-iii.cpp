class Solution {
public:
    int nextGreaterElement(int n) {
        string s=to_string(n);
        int saddle=-1;
        for(int i=s.length()-2;i>=0;i--){
            if (s[i]<s[i+1]){
                ///milgya saddle point//
                saddle=i;
                break;
            }
        }
        if (saddle==-1) return -1;
        ///minimum value find karo after saddle 
        for(int i=s.length()-1;i>=0;i--){
            if (s[saddle]<s[i]){
                swap(s[saddle],s[i]);
                break;
            }
        }
        reverse(s.begin()+saddle+1,s.end());
        long long ans=stoll(s);
        if (ans>INT_MAX) return -1;
        return (int)ans;
    }
};