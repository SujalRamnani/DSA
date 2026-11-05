class Solution {
public:
bool bs(vector<int> &arr,long long mid,int h){
    long long ans=0;
    for(int i=0;i<arr.size();i++){
        ans+=(ceil)(1.0*arr[i]/mid);
    }
    if (ans<=h) return true;
    return false;
}
    int minEatingSpeed(vector<int>& arr, int h) {
        int n=arr.size();
        long long low=1;long long high=INT_MAX;
        int ans=-1;
        while(low<=high){
            long long mid=(low+high)/2;
            if (bs(arr,mid,h)==true){
                ans=mid;
                high=mid-1;
            }
            else low=mid+1;

        }
        return ans;
        
    }
};