class Solution {
public:
    vector<int> leftRightDifference(vector<int>& arr) {
        
// int n=arr.size();
// vector<int> ans(n);
//         vector<int> leftSum(n,0);vector<int> rightSum(n,0);
//         leftSum[0]=0;
//         for(int i=1;i<arr.size();i++){
//             leftSum[i]=leftSum[i-1]+arr[i-1];
//         }
//         rightSum[n-1]=0;
//         for(int i=n-2;i>=0;i--){
//             rightSum[i]=rightSum[i+1]+arr[i+1];
//         }

//         for(int i=0;i<n;i++){
//             ans[i]=abs(leftSum[i]-rightSum[i]);
//         }
//         return ans;



int n=arr.size();
int totalSum=0;for(int i=0;i<n;i++) totalSum+=arr[i];
vector<int> ans(n,0);
int curr=0;
for(int i=0;i<n;i++){
    int leftSum=curr;
    curr+=arr[i];
    int rightSum=totalSum-curr;
    ans[i]=abs(leftSum-rightSum);

}
    return ans;    
    }
};