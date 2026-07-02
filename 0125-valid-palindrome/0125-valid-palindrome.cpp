class Solution {
public:
bool isAlnum(char ch){
    if (ch>='0' && ch<='9' || tolower(ch)>='a' && tolower(ch)<='z') return true;
    return false; 
}
    bool isPalindrome(string s) {
        int n=s.length();
       int i=0,j=n-1;
       while(i<j){
        while (i<j && !isAlnum(s[i])) i++;
        while (i<j && !isAlnum(s[j])) j--;
        if (tolower(s[i])!=tolower(s[j])) return false;
        i++;j--;
       }
       return true;
    }
};