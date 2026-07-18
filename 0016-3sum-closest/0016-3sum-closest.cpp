class Solution {
public:
    int threeSumClosest(vector<int>& arr, int target) {
        int close=100000;
        sort(arr.begin(), arr.end()); //sort karne pe fayda hai aur index bhi nhi manga kardo
        int n=arr.size();
        for(int i=0;i<n;i++){
            int n1=arr[i];
            int p=i+1;int q=n-1;
            while(p<q){
                int sum=arr[p]+arr[q]+n1;
                if (abs(sum-target)<abs(target-close)) close=sum; ///taget-close bada hai apne ko chota close chahiye isliye usko update karte jao
                else if (sum>target) q--;
                else p++;

            }

        }
        return close;
        
    }
};