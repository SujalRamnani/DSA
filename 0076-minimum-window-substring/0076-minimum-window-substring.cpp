class Solution {
public:
bool func(unordered_map<char,int> &have, unordered_map<char,int> &need)
{
    for(auto it : need)
    {
        if(have[it.first] < it.second)
            return false;
    }
    return true;
}
    string minWindow(string s, string t) {
        int m=s.length();
        int n=t.length();
        int low=0;int minLen=INT_MAX;
        unordered_map<char,int> mp1;
        for(int i=0;i<n;i++) mp1[t[i]]++;
int start=-1;
         unordered_map<char,int> mp2;
        for(int high=0;high<m;high++){
            //high ko add karo info mein
            mp2[s[high]]++;

            while(func(mp2,mp1)){
                int len=high-low+1;
                if (len<minLen){
                    minLen=len;
                     start=low;
                }
                mp2[s[low]]--;
                low++;
            }
        }
        if (minLen==INT_MAX) return "";
        return s.substr(start,minLen);
    }
};