class Solution {
public:
    double findMaxAverage(vector<int>& arr, int k) {
        //fixed length ke window hai
        int n=arr.size();
        int low=0,high=k-1;
        double avg=0;
double maxAvg=0;int sum=0;
        for(int i=low;i<=high;i++) sum+=arr[i];
        avg=sum*1.0/k;
maxAvg=avg;

        while(high<n){
            maxAvg=max(maxAvg,avg);
            low++;
            high++;
            sum-=arr[low-1];
             avg=sum*1.0/k;
            if (high==n) break;
            sum+=arr[high];
             avg=sum*1.0/k;
           


        }
        return maxAvg;
        
    }
};