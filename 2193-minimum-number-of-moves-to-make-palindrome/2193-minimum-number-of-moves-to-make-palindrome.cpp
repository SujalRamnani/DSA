class Solution {
public:
    int minMovesToMakePalindrome(string s) {
        int n=s.length();
        int i=0,j=n-1;
        int ans=0;
        while(i<j){
            int k=j;
            while(k>i && s[i]!=s[k]) k--;
            //no matching character found//
            if (i==k){
                swap(s[i],s[i+1]);
                  ans++;
            }
            else{
                //swap matching with j
                while(k<j){
                    swap(s[k],s[k+1]);
                    k++;
                    ans++;

                }
                i++;
                j--;
            }
        }
          
return ans;
    }
};