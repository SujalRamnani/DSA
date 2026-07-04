class Solution {
public:
    double findMaxAverage(vector<int>& arr, int size) {
        //subarray of k length maang raha hai matlab fixed size sliding window

        ///jabhi fixed size length ka window ho tab first window ka nikalo aur fir slide karo
        int low=0;int high=size-1;
        int sum=0;int n=arr.size();
        for(int i=low;i<=high;i++) sum+=arr[i];
        double avg=(sum*1.0)/size; //1st window ka avg
        double maxAvg=INT_MIN;
        while(high<n){
            maxAvg=max(maxAvg,avg);
            //abb aage wali window matlab window ko slide karo
            low++;
            high++;
            if (high==n) break;
            sum=sum-arr[low-1];
            sum=sum+arr[high];
            avg=(sum*1.0)/size;
        }
        return maxAvg;

        
    }
};