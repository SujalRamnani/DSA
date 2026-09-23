class Solution {
public:
    void nextPermutation(vector<int>& arr) {
        // next_permutation(arr.begin(),arr.end());

        int n=arr.size();
        int pivotIndx=-1;
        for(int i=n-2;i>=0;i--){
            if (arr[i]<arr[i+1]){
                pivotIndx=i;
                break;
            }
        }
        if (pivotIndx==-1){
            reverse(arr.begin(),arr.end());
            return ;
        }

        ///abb pivotIndx ke baad minimum jo bhi value hai uske saath arr[pivotIndx] ko swap karo///
        for(int i=n-1;i>pivotIndx;i--){
            if (arr[pivotIndx]<arr[i]){
                swap(arr[pivotIndx],arr[i]);
                break;
            }
        }
        ///abb i ke baad wale ko reverse kardo aur array jo return kardo///
        reverse(arr.begin()+pivotIndx+1,arr.end());
        return;


        
        
    }
};