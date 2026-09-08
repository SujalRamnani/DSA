class Solution {
public:
    vector<int> rearrangeArray(vector<int>& arr) {
        int n=arr.size();
         vector<int> ans(n,0);
         vector<int> pos;
         vector<int> neg;
         for(int x:arr){
            if (x>0) pos.push_back(x);
            else neg.push_back(x);
         }

        int i=0,j=0;
        int k=0;
        while(i<pos.size() && j<neg.size()){
            ans[k]=pos[i];
            k++;i++;

            ans[k]=neg[j];
            k++;j++;

        }
        while(i<pos.size()){
             ans[k]=pos[i];
            k++;i++;
        }
        while(j<neg.size()){
            ans[k]=neg[j];
            k++;j++;
        }
        return ans;

        
    }
};