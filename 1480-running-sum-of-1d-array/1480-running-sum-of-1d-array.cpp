class Solution {
public:
    vector<int> runningSum(vector<int>& arr) {
        //ye prefix sum nikal ne bol raha hai
        int n=arr.size();
        vector<int> prefix(n);
        prefix[0]=arr[0];
        for(int i=1;i<n;i++) prefix[i]=prefix[i-1]+arr[i];
        return prefix;
    }
};