class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& arr) {
        vector<int> odd;
        vector<int> even;

        for(int i=0;i<arr.size();i++){
            if (arr[i]%2==0) even.push_back(arr[i]);
            else odd.push_back(arr[i]);
        }
        vector<int> ans(odd.size()+even.size(),0);
        int i=0,j=0;
        for(int k=0;k<ans.size();k++){
            if (k%2==0){
                ans[k]=even[i];
                i++;
            }
            else{
                ans[k]=odd[j];
                j++;
            }
        }
        return ans;
    }
};