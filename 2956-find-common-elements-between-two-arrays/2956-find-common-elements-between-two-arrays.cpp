class Solution {
public:
    vector<int> findIntersectionValues(vector<int>& a, vector<int>& b) {
        int m=a.size();int n=b.size();
        vector<int> ans;
        unordered_map<int,int> mp1;
        for(int i=0;i<m;i++) mp1[a[i]]++;
      
       unordered_map<int,int> mp2;
       for(int i=0;i<n;i++) mp2[b[i]]++;
        
        int count1=0;
       for(int i=0;i<m;i++){
        if (mp2.find(a[i])!=mp2.end()) count1++;
       }

       int count2=0;
       for(int i=0;i<n;i++){
         if (mp1.find(b[i])!=mp1.end()) count2++;
       }

       return {count1,count2};


        
        
    }
};