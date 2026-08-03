class Solution {
public:
    string reversePrefix(string s, char ch) {
        int n=s.length();

        int j=-1;
        for(int i=0;i<s.length();i++){
            if (s[i]==ch){
                j=i;
                break;
            }
        }

        int p=0,q=j;
        while(p<=q){
            swap(s[p],s[q]);
            p++;
            q--;
        }
        return s;
        
    }
};