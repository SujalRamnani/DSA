class Solution {
public:
    int minTimeToType(string word) {
        char curr='a';
        int ans=0;
        for(int i=0;i<word.length();i++){
            int normal=abs(word[i]-curr);
            int circular=26-normal;
            ans+=min(normal,circular);
            ans+=1;
            
            curr=word[i];
        }
        return ans;
    }
};