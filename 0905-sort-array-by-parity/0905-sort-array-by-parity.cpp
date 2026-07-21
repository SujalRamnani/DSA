class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& arr) {
        int n=arr.size();
        
        vector<int> ans(n);
        int i=0,j=ans.size()-1;
        for(int k=0;k<arr.size();k++){
            if (arr[k]%2!=0) {
                ans[j]=arr[k];
                j--;

            }
            else{
                ans[i]=arr[k];
                i++;
            }
        }
return ans;
        
    }
};