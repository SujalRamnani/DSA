class Solution {
public:
    string customSortString(string order, string s) {
        unordered_map<char,int> mp;
        for(int i=0;i<s.length();i++) mp[s[i]]++;

        string ans="";
        for(int i=0;i<order.length();i++){
            if(mp.find(order[i])!=mp.end()){
                int freq=mp[order[i]];
                while(freq--) ans.push_back(order[i]);

                mp.erase(order[i]);
            } 
        }

        for(auto it:mp){
            while(it.second--){
                ans.push_back(it.first);
            }
        }
return ans;

    }
};