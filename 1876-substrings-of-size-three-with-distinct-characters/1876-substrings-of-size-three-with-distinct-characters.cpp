class Solution {
public:
    int countGoodSubstrings(string s) {
        int n=s.length();
        int low=0,high=2;
        unordered_map<char,int> mp;
        int count=0;
        for(int i=low;i<=high;i++) mp[s[i]]++;
        if (mp.size()==3) count++;
        while(high<n){
            mp[s[low]]--;
            if (mp[s[low]]==0) mp.erase(s[low]);
            low++;
            high++;
            if (high==n) break;
            mp[s[high]]++;
            if (mp.size()==3) count++;  
        }
        return count;
    }
};