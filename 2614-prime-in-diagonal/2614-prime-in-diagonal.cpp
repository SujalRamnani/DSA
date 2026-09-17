class Solution {
public:
bool isPrime(int x){
    for(int i=2;i<=sqrt(x);i++){
        if (x%i==0) return false;
    }
    return true;
}
    int diagonalPrime(vector<vector<int>>& arr) {
        int m=arr.size();
        int n=arr[0].size();
          int ans=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if (i==j){
                 if (isPrime(arr[i][j])==true){
                    ans=max(ans,arr[i][j]);
                 }

                }
                if (i+j==n-1){
                   if (isPrime(arr[i][j])==true){
                    ans=max(ans,arr[i][j]);
                 } 

                }
            }
        }
        if (ans==1) return 0;
        return ans;
        
    }
};