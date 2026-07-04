class Solution {
public:
bool allZeros( unordered_map<char,int> &mp){
      for(auto it:mp){
          if (it.second!=0) return false;
      }
      return true;
  }
    vector<int> findAnagrams(string s, string p) {
        unordered_map<char,int> mp;
        for(int i=0;i<p.length();i++) mp[p[i]]++;
int m=s.length();
        vector<int> ans;
        int low=0,high=0;
        while(high<m){
            mp[s[high]]--;
            if (high-low+1==p.length()){
                if (allZeros(mp)==true){
                    ans.push_back(low);
                }
                    mp[s[low]]++;
                    low++;
                
            }
            high++;

        }
        return ans;
    }
};