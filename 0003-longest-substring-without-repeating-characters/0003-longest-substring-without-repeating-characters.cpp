class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.length(); 
        ///variable length sw ka sawal hai
        int low=0,high=0;
        int maxLen=0;
        unordered_map<char,int> mp;
        while(high<n){
            mp[s[high]]++;
            ///character repeat nhi hona chahiye

            while(mp[s[high]]>1){
                
                mp[s[low]]--;
                if (mp[s[low]]==0) mp.erase(s[low]);
                 low++;
            }
            int len=high-low+1;
            maxLen=max(maxLen,len);
         high++;
        }
        return maxLen;
        
    }
};