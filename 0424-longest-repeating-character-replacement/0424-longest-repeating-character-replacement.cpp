class Solution {
public:
    int characterReplacement(string s, int k) {
        int n=s.length();
        unordered_map<char,int> mp;
        int low=0,high=0;
        int maxLen=0;
        while(high<n){
            mp[s[high]]++;
            ////jab tak information galat hai tab tak low ko aage badhao
           ///k replacement karne ke baad window ke sare character same hai ya nhi batao
            int maxFreq = 0;
             // 2. Find maximum frequency in current window
            for(auto it : mp)  maxFreq = max(maxFreq, it.second);
            int len=high-low+1;
             // 3. Window invalid?
            while(len-maxFreq>k){
                mp[s[low]]--;
                if(mp[s[low]] == 0)  mp.erase(s[low]);
                low++;
                ///length change hogi firse nikalo aur frequency bhi change hogi
                len=high-low+1;
                maxFreq=0;
                 for(auto it : mp)  maxFreq = max(maxFreq, it.second);

                
            }
             len=high-low+1;
            maxLen=max(maxLen,len);
            high++;
        }
        return maxLen;
        
    }
};