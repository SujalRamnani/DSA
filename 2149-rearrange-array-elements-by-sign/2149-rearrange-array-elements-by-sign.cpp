class Solution {
public:
    vector<int> rearrangeArray(vector<int>& arr) {
        int n=arr.size();
         vector<int> pos;
         vector<int> neg;
         for(int i=0;i<n;i++){
            if (arr[i]>0) pos.push_back(arr[i]);
            else neg.push_back(arr[i]);
         }
         int indx=0;
         int p=0,q=0;
        for(int i=0;i<n;i++){
            if (i%2==0){
                arr[indx]=pos[p];
                indx++;p++;
            }
            else{
                arr[indx]=neg[q];
                indx++;q++;

            }
        }
         return arr;
           

    }
};