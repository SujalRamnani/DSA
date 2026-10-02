class Solution {
public:
bool isVowel(char ch){
    if (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u') return true;
    return false;
}
    int maxVowels(string s, int k) {
        int n=s.length();
        int low=0,high=k-1;
        int count=0;
        for(int i=low;i<=high;i++){
            char ch=s[i];
            if (isVowel(ch)) count++;
        }
        int ans=0;
        ans=max(ans,count);
        while(high<n){
             ans=max(ans,count);
            if (isVowel(s[low])) count--;
            low++;
            high++;
            if (high==n) break;
            if (isVowel(s[high])) count++;
        }
        return ans;
    }
};