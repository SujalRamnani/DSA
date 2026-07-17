class Solution {
public:
vector<vector<int>> result;
void twoSum(vector<int>& arr,int target,int i,int j){
    while(i<j){
        if (arr[i]+arr[j]>target) j--;
        else if (arr[i]+arr[j]<target) i++;
        else{
            //first remove duplicates
        while (i<j && arr[i]==arr[i+1]) i++;
        while(i<j && arr[j]==arr[j-1]) j--;
        
        result.push_back({-target,arr[i],arr[j]});
        i++;
        j--;


        }
    }
}
    vector<vector<int>> threeSum(vector<int>& arr) {
        ////triplets return karna hai matlab clearly two pointer ka hai
        int n=arr.size();
        ///sort karne pe fayda hoga yes hoga toh kardo
        sort(arr.begin(),arr.end());
        for(int i=0;i<n;i++){
            if (i>0 && arr[i]==arr[i-1]) continue;
            int n1=arr[i];
            int target=-n1;
            twoSum(arr,target,i+1,n-1);
        }
        return result;
        
    }
};