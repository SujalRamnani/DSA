class Solution {
public:
    long long maximumSubarraySum(vector<int>& arr, int k) {
        // int n=arr.size();
        // int i=0,j=0;
        // unordered_set<int> st;
        // long long currWindowSum=0;
        // long long maxSum=0;

        // while(j<n){
        //     while(st.count(arr[j])){
        //         //set mein jab tak present hai tab tab aage badhte jao 
        //         currWindowSum-=arr[i];
        //         st.erase(arr[i]);
        //         i++;
        //     }
        //      st.insert(arr[j]);
        //     currWindowSum+=arr[j];
           
        //    if (j-i+1==k){
        //     //window shrink karenge maxsum pehle bana lete hai
        //     maxSum=max(maxSum,currWindowSum);
        //     currWindowSum-=arr[i];
        //     st.erase(arr[i]);
        //     i++;
            
        //    }
        //     j++;

        // }
        // return maxSum;

        int n=arr.size();
        int low=0,high=k-1;long long sum=0;
        unordered_map<int,int> mp;
        for(int i=low;i<=high;i++) {
            sum+=arr[i];
            mp[arr[i]]++;
        }
        long long maxSum=0;
        if (mp.size()==k) maxSum=sum;
        while(high<n){
            sum-=arr[low];
            mp[arr[low]]--;
            if (mp[arr[low]]==0) mp.erase(arr[low]);

            low++;
            high++;
            if (high==n) break;

            sum+=arr[high];
            mp[arr[high]]++;

            if (mp.size()==k) {
                maxSum=max(maxSum,sum);
            }
        }
return maxSum;
    }
};