class Solution {
public:
int bs(vector<int>& arr,int low,int high,int target){
    while(low<=high){
        int mid=(low+high)/2;
        if (arr[mid]==target) return mid;
        else if (arr[mid]<target) low=mid+1;
        else high=mid-1;
    }
    return -1;
}
int findPivot(vector<int>& arr, int target){
    int n=arr.size();
    int low=0,high=n-1;
    while(low<high){
        int mid=(low+high)/2;
        if (arr[mid]>arr[high]) low=mid+1;
        else high=mid;
    }
    return low;
}
    int search(vector<int>& arr, int target) {
            int n=arr.size();
            //pivot index nikal ke dono side binary search lagana hai//
            int pivotIndx=findPivot(arr,target);
            int ans1=bs(arr,0,pivotIndx-1,target);
            if (ans1!=-1) return ans1;

            int ans2=bs(arr,pivotIndx,n-1,target);
            if (ans2!=-1) return ans2;
            return -1;

    }
};