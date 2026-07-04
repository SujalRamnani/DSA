class Solution {
public:
    int countGoodSubstrings(string s) {
        int n=s.length();
        int count=0;
        unordered_map<char,int> mp;
        int low=0,high=2;
        for(int i=low;i<=high;i++) mp[s[i]]++;
        if (mp.size()==3) count++;
        while(high<n-1){
            mp[s[low]]--;
            if (mp[s[low]]==0) mp.erase(s[low]);
            low++;
            high++;

            mp[s[high]]++;
            if (mp.size()==3) count++;

        }

        return count;
    }
};