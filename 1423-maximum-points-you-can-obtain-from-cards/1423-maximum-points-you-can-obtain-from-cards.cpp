class Solution {
public:
    int maxScore(vector<int>& arr, int k) {
        int n=arr.size();
        int maxSum=0;
        int leftSum=0,rightSum=0;

        for(int i=0;i<k;i++) leftSum+=arr[i];
        maxSum=leftSum;
        int endIndx=n-1;
        for(int i=k-1;i>=0;i--){
            leftSum-=arr[i];
            rightSum+=arr[endIndx];
            endIndx--;

            maxSum=max(maxSum,leftSum+rightSum);
        }
        return maxSum;
        
    }
};