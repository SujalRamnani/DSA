class Solution {
public:
    vector<int> intersect(vector<int>& a, vector<int>& b) {
          vector<int> ans;
          int m=a.size();int n=b.size();
          int i=0,j=0;
          sort(a.begin(),a.end());
          sort(b.begin(),b.end());
          while(i<m && j<n){
            if (a[i]<b[j]) i++;
            else if (a[i]==b[j]){
                ans.push_back(a[i]);
                i++;j++;
            }
            else if (a[i]>b[j]) j++;
          }
          return ans;

    }
};