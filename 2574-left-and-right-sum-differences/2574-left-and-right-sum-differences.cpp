class Solution {
public:
    vector<int> leftRightDifference(vector<int>& arr) {
        
int n=arr.size();
vector<int> ans(n);
        vector<int> leftSum(n,0);vector<int> rightSum(n,0);
        leftSum[0]=0;
        for(int i=1;i<arr.size();i++){
            leftSum[i]=leftSum[i-1]+arr[i-1];
        }

        rightSum[n-1]=0;
        for(int i=n-2;i>=0;i--){
            rightSum[i]=rightSum[i+1]+arr[i+1];
        }

        for(int i=0;i<n;i++){
            ans[i]=abs(leftSum[i]-rightSum[i]);
        }
        return ans;
        
    }
};