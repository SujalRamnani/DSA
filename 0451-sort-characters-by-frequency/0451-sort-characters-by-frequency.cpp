class Solution {
public:
    string frequencySort(string s) {
        //sabse pehle har character ke frequency nikal lo
        //uske baad jiski frequency sabse jyada vo first

        int n=s.length();
        unordered_map<char,int> mp;
        for(int i=0;i<n;i++) mp[s[i]]++;

        //e->2.t->1,r->1

        string ans="";
        
        
        while(mp.size()!=0){
            char maxChar;
            int maxFreq=0;
            for(auto it:mp){
            if (it.second>maxFreq){
                maxFreq=it.second;
                maxChar=it.first;
            }
            }
           for(int i=0;i<maxFreq;i++){
            ans.push_back(maxChar);
           }
           mp.erase(maxChar);

        }
        return ans;

        
    }
};