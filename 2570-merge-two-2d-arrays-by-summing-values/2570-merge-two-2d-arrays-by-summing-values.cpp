class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& a, vector<vector<int>>& b) {
        vector<vector<int>> ans;
        int m=a.size();
        int n=b.size();
        
        int i=0,j=0;
        while(i<m && j<n){
            int firstValue=a[i][0];
            int secondValue=b[j][0];

            if (firstValue<secondValue){
              ans.push_back(a[i]);
              i++;
            } 
            else if (secondValue<firstValue){
                 ans.push_back(b[j]);
                 j++;
            }
            else if (firstValue==secondValue){
                ans.push_back({a[i][0],a[i][1]+b[j][1]});
                i++;
                j++;
            }
        }

        while(i<m){
             ans.push_back(a[i]);
              i++;
        }
        while(j<n){
            ans.push_back(b[j]);
                 j++;
        }
        return ans;
        
        
    }
};