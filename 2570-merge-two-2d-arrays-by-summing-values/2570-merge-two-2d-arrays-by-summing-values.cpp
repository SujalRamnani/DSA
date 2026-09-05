class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& a, vector<vector<int>>& b) {
        //  vector<vector<int>> ans;
        //  unordered_map<int,int> mp;
        //  for(int i=0;i<a.size();i++){
        //     int id=a[i][0];
        //     int value=a[i][1];

        //     mp[id]+=value;
        //  }

        //  for(int i=0;i<b.size();i++){
        //     int id=b[i][0];
        //     int value=b[i][1];

        //     mp[id]+=value;
        //  }

        //  for(auto it:mp){
        //     int id=it.first;
        //     int val=it.second;

        //     ans.push_back({id,val});
        //  }
        //  sort(ans.begin(),ans.end());
        //  return ans;


vector<vector<int>> ans;
int i=0,j=0;
while(i<a.size() && j<b.size()){
    if (a[i][0]<b[j][0]){
        ans.push_back(a[i]);
        i++;

    }
    else if (b[j][0]<a[i][0]){
        ans.push_back(b[j]);
        j++;
    }
    else if (a[i][0]==b[j][0]){
        ans.push_back({a[i][0],a[i][1]+b[j][1]});
        i++;
        j++;
    }
}
while(i<a.size()){
    ans.push_back(a[i]);
        i++;
}
while(j<b.size()){
     ans.push_back(b[j]);
        j++;
}
return ans;


        
    }
};