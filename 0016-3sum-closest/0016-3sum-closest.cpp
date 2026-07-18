class Solution {
public:
    int threeSumClosest(vector<int>& arr, int target) {
        int n=arr.size();
        //sort karne pe fayda hai aur index nhi manga toh kardo
        sort(arr.begin(),arr.end());
        int close=100000;
        for(int i=0;i<n;i++){
            int n1=arr[i];
            int p=i+1,q=n-1;
            while(p<q){
                int sum=n1+arr[p]+arr[q];
                if (abs(sum-target)<abs(close-target)) close=sum;
                else if (sum>target) q--;
                else p++;
            }
        }
        return close;
    }
};