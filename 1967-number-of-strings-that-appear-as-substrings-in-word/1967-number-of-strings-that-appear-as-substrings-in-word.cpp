class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word) {
      ///word ke saare substring map mein store kardo fir map pe loop lagao aur dekho ke 
      //pattern present hai ya nhi
      unordered_map<string,int> mp;
      int count=0;
      for(int i=0;i<word.length();i++){
       string temp="";
       for(int j=i;j<word.length();j++){
        temp+=word[j];
        mp[temp]++;
       }
      }

     for(int i=0;i<patterns.size();i++){
        if (mp.find(patterns[i])!=mp.end()) count++;
     }
     return count;
      return count;
    }
};