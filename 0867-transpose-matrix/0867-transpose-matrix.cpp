class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& arr) {
        int m=arr.size();int n=arr[0].size();
        vector<vector<int>> ans(n,vector<int>(m)); //transpose mein rows aur column interchnage hota hai isliye ye correct hai naki m,vector<int>(n) hoga///
        for(int i=0;i<arr.size();i++){
            for(int j=0;j<arr[0].size();j++){
                ////diagonal elements as it is reh rha hai aur above and below diagonal swap horha hai//  ye sirf square matrix ke liye chalega rectangular jaha rows aur columns different hai udhar ye approach kaam hi nhi karega 
                ans[j][i]=arr[i][j];
                
            }
        }
        return ans;
    }
};