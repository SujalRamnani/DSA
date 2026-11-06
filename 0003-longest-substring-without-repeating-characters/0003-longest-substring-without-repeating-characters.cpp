class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.length();
        int low=0,high=0;
        unordered_map<char,int> mp;
         int maxLen=0;
        while(high<n){
            mp[s[high]]++;
            while(mp[s[high]]>1){
                mp[s[low]]--;
                low++;
            }
            int len=high-low+1;
            maxLen=max(len,maxLen);
             high++;

        }
        return maxLen;
        
    }
};