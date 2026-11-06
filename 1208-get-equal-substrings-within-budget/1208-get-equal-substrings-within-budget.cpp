class Solution {
public:
    int equalSubstring(string s, string t, int maxCost) {
        int n=s.length();
        int low=0,high=0;
        int maxLen=0;
        int currCost=0;
        while(high<n){
            currCost+=abs(s[high]-t[high]);

            while(currCost>maxCost){
                currCost-=abs(s[low]-t[low]);
                low++;
            }
            if (currCost<=maxCost){
                int len=high-low+1;
                maxLen=max(maxLen,len);
            }
            high++;
        }
        return maxLen;
    }
};