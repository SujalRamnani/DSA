class Solution {
public:
    int maxScore(vector<int>& arr, int k) {
        int n=arr.size();
        int leftSum=0,rightSum=0;
        int maxSum=INT_MIN;
        for(int i=0;i<k;i++) leftSum+=arr[i];
        maxSum=leftSum;
        
        int indx=n-1;
        for(int i=k-1;i>=0;i--){
            leftSum-=arr[i];
            rightSum+=arr[indx];
            indx--;

            maxSum=max(maxSum,rightSum+leftSum);
        }
        return maxSum;
        
    }
};