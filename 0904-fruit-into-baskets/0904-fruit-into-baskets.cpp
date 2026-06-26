class Solution {
public:
    int totalFruit(vector<int>& arr) {
               
            ///max fruits in k baskets where k=2
            int n=arr.size();
            int maxi=0;
            int low=0;
            if (n==1) return 1;
            if (n==2) return 2;
            unordered_map<int,int> mp;
            for(int high=0;high<n;high++){
                mp[arr[high]]++;

                while(mp.size()>2){
                    mp[arr[low]]--;
                    if (mp[arr[low]]==0) mp.erase(arr[low]);
                    low++;
                }
                if (mp.size()<=2){
                    int len=high-low+1;
                    maxi=max(maxi,len);
                }
            }   
return maxi;

    }
};