class Solution {
public:
    vector<int> sortedSquares(vector<int>& arr) {
        // for(int i=0;i<arr.size();i++) arr[i]*=arr[i];
        // sort(arr.begin(),arr.end());
        // return arr;
        
        vector<int> pos;
        vector<int> neg;
        for(int i=0;i<arr.size();i++){
            if (arr[i]>=0) pos.push_back(arr[i]);
            else  neg.push_back(arr[i]);
        }

        for(int i=0;i<neg.size();i++) neg[i]*=neg[i];
        sort(neg.begin(),neg.end());

        for(int i=0;i<pos.size();i++) pos[i]*=pos[i];

        vector<int> ans;
        int i=0,j=0;
        while(i<pos.size() && j<neg.size()){
            if (pos[i]<=neg[j]){
                ans.push_back(pos[i]);
                i++;
            }
            else {
              ans.push_back(neg[j]);
                j++;  
            }

        }

        while(j<neg.size()){
             ans.push_back(neg[j]);
                j++;  
        }
        while(i<pos.size()){
            ans.push_back(pos[i]);
                i++;
        }

return ans;
        
    }
};