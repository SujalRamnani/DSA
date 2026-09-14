class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& a, vector<vector<int>>& b) {

        //  vector<vector<int>> ans;
        //  int i=0,j=0;
        //  int m=a.size(),n=b.size();
        //  while(i<m && j<n){
        //     int firstValue=a[i][0];
        //     int secondValue=b[j][0];

        //     if (firstValue<secondValue){
        //          ans.push_back(a[i]);
        //          i++;
        //     }
        //     else if (firstValue>secondValue){
        //         ans.push_back(b[j]);
        //         j++;
        //     }
        //     else if (firstValue==secondValue){
        //         ans.push_back({a[i][0],a[i][1]+b[j][1]});
        //         i++;
        //         j++;
        //     }
        //  }

        //  while(i<m){
        //          ans.push_back(a[i]);
        //          i++;
        //  }

        //  while(j<n){
        //      ans.push_back(b[j]);
        //         j++;
        //  }
        //  return ans;

vector<vector<int>> ans; 
unordered_map<int,int> mp;
for(int i=0;i<a.size();i++){
    int id=a[i][0];
    int val=a[i][1];
    mp[id]+=val;
}
for(int i=0;i<b.size();i++){
    int id=b[i][0];
    int val=b[i][1];
    mp[id]+=val;
}

for(auto it:mp){
    int key=it.first;
    int val=it.second;
    ans.push_back({key,val});
}
sort(ans.begin(),ans.end());
return ans;


    }
};