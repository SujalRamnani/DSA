class Solution {
public:
    int longestConsecutive(vector<int>& arr) {
        int n=arr.size();
        unordered_map<int,bool> mp;
        for(int i=0;i<n;i++) mp[arr[i]]=true;

        for(int i=0;i<n;i++){
            if (mp.find(arr[i]-1)!=mp.end()) mp[arr[i]]=false;
        }

        //abb jisme true hai uspe hi jayenge 
        int maxLen=0;
        int startPoint=0;
        for(auto it:mp){
            int x=it.first;
            if (mp[x]==true){
                int tempLen=1;
                int tempStart=x;

                while(mp.contains(tempStart+tempLen)) tempLen++;

                if (tempLen>maxLen){
                    startPoint=tempStart;
                    maxLen=tempLen;
                }
            }
        }
        return maxLen;
    }
};