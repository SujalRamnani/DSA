class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& arr) {
        vector<int> even;
        vector<int> odd;
        for(int i=0;i<arr.size();i++){
            if (arr[i]%2==0) even.push_back(arr[i]);
            else odd.push_back(arr[i]);
        }
       int indx=0;
       vector<int> ans(even.size()+odd.size(),0);
       for(int i=0;i<even.size();i++) {
        ans[indx]=even[i];
        indx++;
       }
       for(int i=0;i<odd.size();i++){
        ans[indx]=odd[i];
        indx++;
       }
       return ans;  
    }
};