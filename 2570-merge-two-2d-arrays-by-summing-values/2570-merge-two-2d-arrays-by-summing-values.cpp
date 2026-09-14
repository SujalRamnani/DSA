class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& a, vector<vector<int>>& b) {

         vector<vector<int>> ans;
         int i=0,j=0;
         int m=a.size(),n=b.size();
         while(i<m && j<n){
            int firstValue=a[i][0];
            int secondValue=b[j][0];

            if (firstValue<secondValue){
                 ans.push_back(a[i]);
                 i++;
            }
            else if (firstValue>secondValue){
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