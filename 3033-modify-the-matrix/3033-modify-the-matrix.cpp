class Solution {
public:
int maxx(vector<vector<int>>& arr,int j,int i){
    ///column const aur row variable//
    int maxi=-1;
    for( i=0;i<arr.size();i++){
        if (arr[i][j]>maxi) maxi=arr[i][j];
    }
    return maxi;
}
    vector<vector<int>> modifiedMatrix(vector<vector<int>>& arr) {
        int m=arr.size();
        int n=arr[0].size();
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if (arr[i][j]==-1)
                {
                    int ans=maxx(arr,j,i);
                    arr[i][j]=ans;
                }
            }
        }
       return arr; 
    }
};