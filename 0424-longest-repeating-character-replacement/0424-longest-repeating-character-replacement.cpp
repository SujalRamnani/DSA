class Solution {
public:
int maxiMum(vector<int> &arr){
    int maxi=-1;
    for(int i=0;i<arr.size();i++){
        if (maxi<arr[i]) maxi=arr[i];
    }
    return maxi;
}
    int characterReplacement(string s, int k) {
        int n=s.length();
        int low=0;
        int maxLen=0;

     vector<int> arr(256,0);
        for(int high=0;high<n;high++){
            arr[s[high]-'A']++;
            int windowLength=high-low+1;
            int maxFreq=maxiMum(arr);
            int diff=windowLength-maxFreq;
            while(diff>k){
                arr[s[low]-'A']--;
                 low++;
                 windowLength=high-low+1;
                maxFreq=maxiMum(arr);
                 diff=windowLength-maxFreq;
                

            }
            if (diff<=k){
                int len=high-low+1;
                maxLen=max(len,maxLen);
            }
        }
        return maxLen;
        
    }
};