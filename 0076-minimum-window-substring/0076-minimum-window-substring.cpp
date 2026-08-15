class Solution {
public:
bool sahiHai(vector<int> &have,vector<int> &needed){
    for(int i=0;i<256;i++){
        if (have[i]<needed[i]) return false;
    }
    return true;
}
    string minWindow(string s, string t) {
        int n=s.length();
        int m=t.length();

        vector<int> needed(256,0);
        for(int i=0;i<t.length();i++) needed[t[i]]++;

        vector<int> have(256,0);
        
        int res=INT_MAX;
        int low=0,high=0;
        int start=-1;
        while(high<n){
            have[s[high]]++;

            ///jab tak info sahi hai tab tak 
            while(sahiHai(have,needed)){
                  int len=high-low+1;
                  if (res>len){
                    res=len;
                    start=low;
                  }
                  have[s[low]]--;
                  low++;
            }
            high++;
        }
        if (res==INT_MAX) return "";
        return s.substr(start,res);  
    }
};