class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        //subarray deke rakha hai sliding window ka question hai
        //length bhi deke rakhi hai matlab fixed size sliding window hai
        int n=arr.size();
        int count=0;
        int low=0,high=k-1;
        int sum=0;
        for(int i=low;i<=high;i++) sum+=arr[i];
        if (sum/k>=threshold) count++;

        while(high<n){
            low++;
            high++;
            sum=sum-arr[low-1];
            if (high==n) break;
            sum=sum+arr[high];

            if (sum/k>=threshold) count++;
        }
        return count;
        
    }
};