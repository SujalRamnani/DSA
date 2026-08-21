class Solution {
public:
    string customSortString(string order, string s) {
        string ans="";
        unordered_map<char,int> mp;
        for(int i=0;i<s.length();i++) mp[s[i]]++;

        for(int i=0;i<order.length();i++){
            char ch=order[i];
            if (mp.find(ch)!=mp.end()){
                int frequency=mp[ch];
                while(frequency!=0){ 
                    ans.push_back(ch);
                    frequency--;
                }
                if (frequency==0) mp.erase(ch);
            }
        }

         ////jo character map mein bach gya usko add karo
         for(auto it:mp){
                while(it.second--) ans.push_back(it.first); 
         }
        return ans;
    }
};