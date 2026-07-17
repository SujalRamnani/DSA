class Solution {
public:
    vector<int> partitionLabels(string s) {
        int n=s.length();
        ///ek letter max ek part mein ana chahiye
        unordered_map<char,int> mp;//ye last index tak store karega
        for(int i=0;i<n;i++) mp[s[i]]=i;
        vector<int> ans;
        int i=0;
        while(i<n){
            int end=mp[s[i]];  ///current element ka end point tak nikaleaga
            ///ye end jo hai vo expand hota rahega
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