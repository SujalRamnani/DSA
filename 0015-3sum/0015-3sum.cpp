class Solution {
public:
  vector<vector<int>> ans;
  void twoSum(vector<int>& arr,int target,int i,int j){
    int n=arr.size();
    while(i<j){
        if (arr[i]+arr[j]>target) j--;
        else if (arr[i]+arr[j]<target) i++;
        else{
            ans.push_back({-target,arr[i],arr[j]});
            i++;
            j--;
            while(i<j && arr[i]==arr[i-1]) i++;
            while(i<j && arr[j]==arr[j+1]) j--;
           
            
        }
    }

  }
    vector<vector<int>> threeSum(vector<int>& arr) {
        int n=arr.size();
        sort(arr.begin(),arr.end());
        for(int i=0;i<n;i++){
            if (i>0 && arr[i]==arr[i-1]) continue;

            int curr=arr[i];
            int target=-curr;
            twoSum(arr,target,i+1,n-1);
        }
        return ans;

      


        
    }
};