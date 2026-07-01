class Solution {
public:
    int missingNumber(vector<int>& arr) {
        // int n=arr.size();
        // int originalSum=n*(n+1)/2;
        // int currSum=0;
        // for(int i=0;i<n;i++) currSum+=arr[i] ;
        // return originalSum-currSum;

int n=arr.size();
        int xorr1=0;int xorr2=0;
        for(int i=0;i<n;i++){
            xorr1=xorr1^arr[i];
            xorr2=xorr2^(i+1);
        }
        return xorr1^xorr2;


        
    }
};