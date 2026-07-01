class Solution {
public:
    int maximumSum(vector<int>& arr) {
        ///we want maximum sum and we can ignore one element here//
        //here we can use kadanes algorithm 
        //at any index we are having 2 options 
        //normally add karo no delete 
        //ya fir delete karo ek element ko

        int n=arr.size();
        int noDelete=arr[0];
        int oneDelete=INT_MIN;
        int result=arr[0];
        for(int i=1;i<n;i++){
        int prevNo = noDelete;
        int prevOne = oneDelete;
       noDelete = max(arr[i], prevNo + arr[i]);
      if(prevOne == INT_MIN) oneDelete = prevNo;
      else oneDelete = max(prevOne + arr[i], prevNo);
      result = max(result, max(noDelete, oneDelete));
 }
 return result;
    }
};