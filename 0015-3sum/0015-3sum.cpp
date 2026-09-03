class Solution {
public:
   vector<vector<int>> ans;
   void twoSum(vector<int>& arr,int target,int i,int j){
    while(i<j){
        int sum=arr[i]+arr[j];
        if (sum>target) j--;
        else if (sum<target) i++;
        else{
           while(i<j && arr[i]==arr[i+1]) i++;
           while(i<j && arr[j]==arr[j-1]) j--;

           vector<int> temp={-target,arr[i],arr[j]};
           ans.push_back(temp);

           i++;
           j--;
        }
    }
   }
    vector<vector<int>> threeSum(vector<int>& arr) {
      
         int n=arr.size();
         ////index return nhi karna isliye sort kardo fayda hai
         sort(arr.begin(),arr.end());

         for(int i=0;i<n;i++){
            if (i>0 && arr[i]==arr[i-1]) continue; //skip kardunga agar pehle aagya toh
            int n1=arr[i];
            int target=-n1;
            twoSum(arr,target,i+1,n-1);
         }
return ans;
    }
};