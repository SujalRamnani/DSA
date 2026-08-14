class Solution {
public:
 vector<vector<int>> ans;
void twoSum(vector<int>& arr,int i,int j,int target){
    int n=arr.size();
    while(i<j){
        if (arr[i]+arr[j]>target) j--;
        else if (arr[i]+arr[j]<target) i++;
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
       
        ////triplets return karna hai so 2 pointer pattern 
        //sort karne pe bhi ffayda hai 
          int n=arr.size();
        sort(arr.begin(),arr.end());
        for(int i=0;i<arr.size();i++){
            if (i>0 && arr[i]==arr[i-1]) continue;
            int n1=arr[i];
            int target=-n1;  ///n2+n3=-n1//  //n2+n3=-target//

            twoSum(arr,i+1,n-1,target);
        }
        return ans;
        
    }
};