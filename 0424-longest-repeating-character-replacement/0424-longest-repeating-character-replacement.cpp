class Solution {
public:
int maxCount(vector<int> &f){
    int maxi=INT_MIN;
    for(int i=0;i<f.size();i++) maxi=max(maxi,f[i]);
    return maxi;
}
    int characterReplacement(string s, int k) {
        int n=s.length();
        int low=0,high=0;
        int maxLen=INT_MIN;
        vector<int> f(256,0);
        while(high<n){
            f[s[high]]++;
            int len=high-low+1;
            int count=maxCount(f);
            int diff=len-count;

            while(diff>k){
                f[s[low]]--;
                low++;
                count=maxCount(f);
                len=high-low+1;
                diff=len-count;
            }
            if (diff<=k) maxLen=max(maxLen,high-low+1);
            high++;

        }
        return maxLen;
        
    }
};