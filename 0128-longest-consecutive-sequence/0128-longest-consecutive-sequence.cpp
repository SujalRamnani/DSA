class Solution {
public:
    int longestConsecutive(vector<int>& arr) {
        int n=arr.size();
        unordered_map<int,bool> mp;
        for(int i=0;i<n;i++) mp[arr[i]]=true;

        for(int i=0;i<n;i++){
            if (mp.find(arr[i]-1)!=mp.end()){ //mp.find()!=mp.end() matlab map mein present hai
  //toh mera current point cannot be the starting point kyuki uske pehle wala alrady hai usme present
         mp[arr[i]]=false;
            }
        }
         int maxLen=0;int maxStartPoint=0;
        for(auto it:mp){
            int x=it.first;
            if (mp[x]==true){
                int tempLen=1;
                int tempStart=x;

                while(mp.contains(tempLen+tempStart)) tempLen++;
                if (tempLen>maxLen){
                   maxStartPoint=tempStart;
                   maxLen=tempLen;
                }
            }
        }
return maxLen;
        
    }
};