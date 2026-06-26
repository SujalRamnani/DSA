class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.length();
        int low=0;
        int maxLen=0;
        unordered_map<char,int> mp;
        for(int high=0;high<n;high++){
            mp[s[high]]++; //aap pehle high ko information mein dalo

            ///jab tak gaalt hai tab tak low ko aage badhao
            ///duplicate nhi matlab sab character ka frequency ek baar window mein
            while(mp[s[high]]>1){
                mp[s[low]]--;
                if (mp[s[low]]==0) mp.erase(s[low]);
                low++;
            }
            int len=high-low+1;
            maxLen=max(maxLen,len);

        }
        return maxLen;
        
    }
};