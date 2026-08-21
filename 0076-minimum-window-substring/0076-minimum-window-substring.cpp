class Solution {
public:
    string minWindow(string s, string t) {
        int n=s.length();
        int m=t.length();
        unordered_map<char,int> mp1;
        for(int i=0;i<t.length();i++) mp1[t[i]]++;

        ///variable length sw ka hai sawal
        int minLen=INT_MAX;
        int low=0,high=0;
        int count=0;int start=0;
        unordered_map<char,int> mp2;
        while(high<n){
           mp2[s[high]]++;
           if (mp1.find(s[high])!=mp1.end() && mp2[s[high]]<=mp1[s[high]]) count++;
           while(count==t.length()){
            int len=high-low+1;
            if (minLen>len){
                minLen=len;
                start=low;
            }
            mp2[s[low]]--;
            if(mp1.find(s[low])!=mp1.end() && mp2[s[low]]<mp1[s[low]]) count--;
            low++;
           }

           high++;
        }
        if (minLen==INT_MAX) return "";
        return s.substr(start,minLen);
    }
};