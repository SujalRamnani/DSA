class Solution {
public:
bool isVowel(char ch){
     if (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u') return true;
     return false;
}
    int maxVowels(string s, int k) {
        int n=s.length();
        int count=0;
        int low=0,high=k-1;
        for(int i=0;i<k;i++){
            char ch=s[i];
            if (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u') count++;
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