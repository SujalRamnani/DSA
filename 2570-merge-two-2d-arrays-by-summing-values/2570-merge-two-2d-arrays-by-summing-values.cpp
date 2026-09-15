class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& a, vector<vector<int>>& b) {
        // vector<vector<int>> ans;
        // int m=a.size();
        // int n=b.size();
        
        // int i=0,j=0;
        // while(i<m && j<n){
        //     int firstValue=a[i][0];
        //     int secondValue=b[j][0];

        //     if (firstValue<secondValue){
        //       ans.push_back(a[i]);
        //       i++;
        //     } 
        //     else if (secondValue<firstValue){
        //          ans.push_back(b[j]);
        //          j++;
        //     }
        //     else if (firstValue==secondValue){
        //         ans.push_back({a[i][0],a[i][1]+b[j][1]});
        //         i++;
        //         j++;
        //     }
        // }

        // while(i<m){
        //      ans.push_back(a[i]);
        //       i++;
        // }
        // while(j<n){
        //     ans.push_back(b[j]);
        //          j++;
        // }
        // return ans;
        
        int m=a.size();int n=b.size();
        vector<vector<int>> ans;
        unordered_map<int,int> mp;
        for(int i=0;i<m;i++){
            int id=a[i][0];
            int value=a[i][1];

            mp[id]+=value;
        }

        for(int i=0;i<n;i++){
            int id=b[i][0];
            int value=b[i][1];

            mp[id]+=value;
        }

        for(auto it:mp){
            int id=it.first;
            int value=it.second;

            ans.push_back({id,value});
        }
        sort(ans.begin(),ans.end());
        return ans;

        
    }
};