class Solution {
public:
    int maximumProduct(vector<int>& arr) {
        int n=arr.size();
        long long product=1;
        sort(arr.begin(),arr.end());
        long long product1=arr[n-1]*arr[n-2]*arr[n-3];
        long long product2=arr[0]*arr[1]*arr[n-1];
        product=max(product1,product2);
        return (int) product;
        
    }
};