class Solution {
public:
    vector<int> sortedSquares(vector<int>& arr) {
        // int n=arr.size();
        // for(int i=0;i<n;i++) arr[i]*=arr[i];
        // sort(arr.begin(),arr.end());
        // return arr;
        
        int n=arr.size();
        vector<int> pos;
        vector<int> neg;
        for(int i=0;i<n;i++){
            if (arr[i]>0) pos.push_back(arr[i]);
            else neg.push_back(arr[i]);
        }

        for(int i=0;i<pos.size();i++) pos[i]*=pos[i];
        for(int i=0;i<neg.size();i++) neg[i]*=neg[i];

        sort(neg.begin(),neg.end());
        int i=0,j=0;
        vector<int> ans;
        while(i<neg.size() && j<pos.size()){
            if (neg[i]<pos[j]){
                 ans.push_back(neg[i]);
                 i++;
            }
            else{
                 ans.push_back(pos[j]);
                 j++;
            }
        }
        while(i<neg.size()){
             ans.push_back(neg[i]);
                 i++;
        }
        while(j<pos.size()){
            ans.push_back(pos[j]);
                 j++;
        }
        return ans;
    }
};