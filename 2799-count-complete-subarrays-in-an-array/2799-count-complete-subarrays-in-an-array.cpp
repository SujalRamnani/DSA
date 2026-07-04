class Solution {
public:
    int countCompleteSubarrays(vector<int>& arr) {
        int n=arr.size();
        unordered_map<int,int> mp;
        set<int> st;
        for(int i=0;i<n;i++) st.insert(arr[i]);
        int count=st.size();
      int low=0,high=0;int result=0;
      while(high<n){
        mp[arr[high]]++;

        while(mp.size()==count){
               result+=(n-high);
            mp[arr[low]]--;
            if (mp[arr[low]]==0) mp.erase(arr[low]);
         
            low++;
        }
        high++;
      }
      return result;
        


        
    }
};