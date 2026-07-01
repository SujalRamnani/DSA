class Solution {
public:
    int missingNumber(vector<int>& arr) {
        int n=arr.size();
        int originalSum=n*(n+1)/2;

        int currSum=0;
        for(int i=0;i<n;i++) currSum+=arr[i] ;
        return originalSum-currSum;
        
    }
};