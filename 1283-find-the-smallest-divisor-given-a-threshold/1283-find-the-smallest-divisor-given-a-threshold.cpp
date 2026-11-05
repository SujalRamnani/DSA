class Solution {
public:
bool bs(vector<int>& arr,int mid,int threshold){
    long long ans=0;
    for(int i=0;i<arr.size();i++){
        ans+=(ceil)(1.0*arr[i]/mid);
    }
    if (ans<=threshold) return true;
    return false;
}
    int smallestDivisor(vector<int>& arr, int threshold) {
        int n=arr.size();
        int low=1,high=INT_MAX;
        int ans=-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if (bs(arr,mid,threshold)==true){
                ans=mid;
                high=mid-1;
            }
            else low=mid+1;
        }
        return ans;
        
    }
};