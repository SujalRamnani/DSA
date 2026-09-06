class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& arr) {
     
        int n=arr.size();
        vector<int> odd;vector<int> even;
        for(int i=0;i<n;i++){
            if (arr[i]%2!=0) odd.push_back(arr[i]);
            else even.push_back(arr[i]);
        }

        int i=0,j=0;
        vector<int> ans;
        while(i<even.size() && j<odd.size()){
            ans.push_back(even[i]);
            i++;
            ans.push_back(odd[j]);
            j++;
        }
        while(i<even.size()){
             ans.push_back(even[i]);
            i++;
        }
        while(j<odd.size()){
           ans.push_back(odd[j]);
            j++; 
        }
        return ans;

    }
};