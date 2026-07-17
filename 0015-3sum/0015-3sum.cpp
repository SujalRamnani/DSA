class Solution {
public:
vector<vector<int>> ans;
void twoSum(vector<int> &arr,int target,int i,int j){
    while(i<j){

        if (arr[i]+arr[j]<target) i++;
        else if (arr[i]+arr[j]>target) j--;
        else{
            //pehle remove duplicates
            while(i<j && arr[i]==arr[i+1]) i++;
            while(i<j && arr[j]==arr[j-1]) j--;
            ans.push_back({-target,arr[i],arr[j]});
            i++;
            j--;
        }
    }
}
    vector<vector<int>> threeSum(vector<int>& arr) {
        //sort karne pe fayda horaha hai toh kardo
        sort(arr.begin(),arr.end());
        int n=arr.size();
        for(int i=0;i<n;i++){
            if (i>0 && arr[i]==arr[i-1]) continue; //pehle agar aa chuka hai as n1 toh firse nhi lo
            int n1=arr[i];
            int target=-n1;
            twoSum(arr,target,i+1,n-1);
        }
        return ans;


        
    }
};