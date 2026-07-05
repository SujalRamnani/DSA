class Solution {
public:
bool isAnyVowel(char ch){
    if (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u') return true;
    return false;
}
    int maxVowels(string s, int k) {
        int n=s.length();
        int count=0;
        int low=0,high=k-1;
        for(int i=low;i<=high;i++){
            if (isAnyVowel(s[i])) count++;
        }
        int maxCount=count;
        while(high<n){
            maxCount=max(maxCount,count);
             // Remove outgoing character
            if(isAnyVowel(s[low])) count--;
            low++;
            high++;
            if (high==n) break;
            if (isAnyVowel(s[high])) count++;

        }
        return maxCount;



    }
};