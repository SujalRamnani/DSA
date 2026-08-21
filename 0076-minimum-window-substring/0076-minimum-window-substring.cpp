class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char,int> mp;
        for(int i=0;i<t.length();i++) mp[t[i]]++;

        int n=s.length();
        int low=0,high=0;
        int minLen=INT_MAX;
        int requiredCount=t.length();
        int start=0;

        while(high<n){
            char ch=s[high];
            if (mp[ch]>0) requiredCount--;
            mp[ch]--;

            while (requiredCount==0){
                ///start shrinking///
                int len=high-low+1;
                if (minLen>len){
                    minLen=len;
                    start=low;
                }
                mp[s[low]]++;
                if (mp[s[low]]>0){
                requiredCount++;
                }
                low++;
            }

            high++;
        }
        if (minLen==INT_MAX) return "";
        return s.substr(start,minLen);
    }
};