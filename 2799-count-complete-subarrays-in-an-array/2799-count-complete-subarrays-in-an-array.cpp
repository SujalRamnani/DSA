class Solution {
public:
    int countCompleteSubarrays(vector<int>& arr) {
        int n=arr.size();
        set<int> st;
        for(int i=0;i<n;i++) st.insert(arr[i]);
        //distinct element total is equal to size of set
        int distinct=st.size();
unordered_map<int,int> mp;
        long long count=0;
        int low=0,high=0;
        while(high<n){
            mp[arr[high]]++;
        while (mp.size()==distinct) {
            count += (n-high);

    mp[arr[low]]--;

    if(mp[arr[low]]==0)
        mp.erase(arr[low]);
         low++;
        }
            high++;
            
        }
        return count;
        
    }
};