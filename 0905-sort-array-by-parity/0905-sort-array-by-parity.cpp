class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& arr) {
        int n=arr.size();
          vector<int> ans;
          vector<int> even;
          vector<int> odd;
          for(int i=0;i<arr.size();i++){
            if (arr[i]%2==0) even.push_back(arr[i]);
            else odd.push_back(arr[i]);
          }

          for(int x:even) ans.push_back(x);
          for(int x:odd) ans.push_back(x);
          return ans;
        
    }
};