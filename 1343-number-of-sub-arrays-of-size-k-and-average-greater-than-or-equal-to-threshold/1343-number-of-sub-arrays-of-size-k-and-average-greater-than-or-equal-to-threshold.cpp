class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int n=arr.size();
        int low=0,high=k-1;
        int sum=0;
        
        int count=0;
        for(int i=low;i<=high;i++){
            sum+=arr[i];
           
        }
         int avg=sum/k;
            if (avg>=threshold) count++;  
       
        while(high<n){
           
            low++;
            sum-=arr[low-1];
            high++;
             if (high==n) break;
            sum+=arr[high];
           
            int  avg=sum/k;
            if (avg>=threshold) count++; 

        }
        return count;
        
    }
};