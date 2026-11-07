class Solution {
public:
    int minMoves(vector<int>& arr) {
        int n=arr.size();
        //we cannot do decrement cannot subtract here..we just can add increment here//
         //ek time pe n-1 ko hi increment kar sakte hai
         //   matlab array mein 3 element hai toh 2 ko hi ek time per increase kar sakte hai//

         int count=0;
         int minEle=INT_MAX;
         for(int i=0;i<n;i++) minEle=min(minEle,arr[i]);
         long long sum=0;
         for(int i=0;i<n;i++) sum+=arr[i];
         if(minEle==INT_MAX) return INT_MAX;

         return (int)sum-(1LL*n*minEle);
        
    }
};