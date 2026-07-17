class Solution {
public:
    vector<int> partitionLabels(string s) {
        int n=s.length();
        vector<int> ans;
        unordered_map<char,int> mp;
 for(int i=0;i<n;i++) mp[s[i]]=i; //map chahiye jo last occurence store kare na ki frequency

        int i=0;
        while(i<n){
          int end=mp[s[i]];
            int j=i;
            while(j<end){
                end=max(end,mp[s[j]]);
                j++;
            }
            ans.push_back(j-i+1);
            i=j+1;
        }
return ans;
        
    }
};