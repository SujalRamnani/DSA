class Solution {
public:
    int equalSubstring(string s, string t, int maxCost) {
        int low=0,high=0;
        int maxLen=0;
        int currCost=0;
        int n=s.length();
        while(high<n){
            currCost+=abs(s[high]-t[high]);
            while(currCost>maxCost){
                currCost-=abs(s[low]-t[low]);
                low++;
            }
           
                int len=high-low+1;
                maxLen=max(maxLen,len);
            high++;

        }
        return maxLen;
        
    }
};