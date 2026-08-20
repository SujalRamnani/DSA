class Solution {
public:
    int longestConsecutive(vector<int>& arr) {
        int n=arr.size();
        unordered_map<int,bool> mp;
        for(int i=0;i<n;i++) mp[arr[i]]=true;

        for(int i=0;i<n;i++){
            if (mp.find(arr[i]-1)!=mp.end()) mp[arr[i]]=false;
        }

        ///3rd loop isme unhi ke liye kaam karenge jinki value true hai
        int maxStartPoint=0;
        int maxLen=0;
        for(auto it:mp){
            int x=it.first;
            if (mp[x]==true){
                int tempLen=1;
                int tempStartPoint=x;

                while(mp.find(tempStartPoint+tempLen)!=mp.end()) tempLen++;
                if (tempLen>maxLen){
                    tempStartPoint=x;
                    maxLen=tempLen;
                }
            }
        }

         return maxLen;
        
    }
};


