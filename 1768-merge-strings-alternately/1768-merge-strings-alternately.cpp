class Solution {
public:
    string mergeAlternately(string s, string t) {
        int m=s.length();
        int n=t.length();
        string ans(m+n,' ');
        int i=0,j=0;
        int k=0;
        while(i<m && j<n){
            
            ans[k]=s[i];
            k++;
            i++;
            
            
            ans[k]=t[j];
            k++;
            j++;
            
        }

        if (i==m){
            while(j<n){
                ans[k]=t[j];
            k++;
            j++;

            }
        }
        if (j==n){
            while(i<m){
                ans[k]=s[i];
                k++;
                i++;
            }
        }
       return ans; 
    }
};