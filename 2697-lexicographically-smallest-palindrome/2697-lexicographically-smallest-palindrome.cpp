class Solution {
public:
    string makeSmallestPalindrome(string s) {
        int n=s.length();
        int i=0,j=n-1;
        while(i<j){
            if (s[i]==s[j]){
                i++;
                j--;
            }
            else{
                char mini=min(s[i],s[j]);
                s[i]=mini; //s[mini] ye index matlab ascii value dega aapan s[i] mein mini put kar rahe hai
                s[j]=mini;
                i++;
                j--;
            }
        }
        return s;
    }
};