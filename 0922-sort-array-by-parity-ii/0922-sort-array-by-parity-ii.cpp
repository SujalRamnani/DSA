class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& arr) {
        int n=arr.size();
        vector<int> even;vector<int> odd;
        for(int i=0;i<n;i++){
            if (arr[i]%2==0) even.push_back(arr[i]);
            else odd.push_back(arr[i]);
        }
        int i=0;int j=0;
        vector<int> ans;
        while(i<even.size() && j<odd.size()){
          ans.push_back(even[i]);
          i++;
          ans.push_back(odd[j]);
          j++;
        }
       
return ans;
        
    }
};