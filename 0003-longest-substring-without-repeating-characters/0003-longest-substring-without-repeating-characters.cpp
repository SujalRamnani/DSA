class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.length();
        //variable length sliding window hai
        int low=0,high=0;
        unordered_map<char,int> mp;
        int maxLen=INT_MIN;
        while(high<n){
            mp[s[high]]++;
            //jab tak information galat tab tak low ko aage badhao
            while(mp[s[high]]>1){
                mp[s[low]]--;
                low++;
            }
            int len=high-low+1;
            maxLen=max(maxLen,len);
            high++;
        }
        if (maxLen==INT_MIN) return 0;
        return maxLen;
    }
};