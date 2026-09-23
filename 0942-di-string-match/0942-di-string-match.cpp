class Solution {
public:
    vector<int> diStringMatch(string s) {
        int n=s.length();
         vector<int> ans(n+1);
         int left=0,right=n;
         int i=0;
         for(int i=0;i<n;i++){
            if (s[i]=='I'){
                ans[i]=left;
                left++;
            }
            else{
                ans[i]=right;
                right--;
            }
         }
         ans[n]=left;
         return ans;

    }
};