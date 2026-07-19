class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        ///ase longest substring batao jisme koi bhi element repeat na ho
        int n=s.length();
        int maxLen=0;
        int low=0,high=0;
        unordered_map<char,int> mp;
        while(high<n){
            mp[s[high]]++;
            while(mp[s[high]]>1){
                mp[s[low]]--;
                if (mp[s[low]]==0) mp.erase(s[low]);
                low++;

            }
            if(mp[s[high]]==1){
                int len=high-low+1;
                maxLen=max(maxLen,len);
            }
            high++;
            
        }
        return maxLen;
    }
};