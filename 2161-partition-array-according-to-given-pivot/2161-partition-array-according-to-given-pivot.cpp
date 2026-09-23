class Solution {
public:
    vector<int> pivotArray(vector<int>& arr, int pivot) {
         vector<int> less;
         vector<int> equal;
         vector<int> more;
         for(int i=0;i<arr.size();i++){
            if (arr[i]<pivot) less.push_back(arr[i]);
            else if (arr[i]>pivot) more.push_back(arr[i]);
            else if (arr[i]==pivot) equal.push_back(arr[i]);
         }

         vector<int> ans;
         for(int i=0;i<less.size();i++) ans.push_back(less[i]);
         for(int i=0;i<equal.size();i++) ans.push_back(equal[i]);
         for(int i=0;i<more.size();i++) ans.push_back(more[i]);
         return ans;
         
        
    }
};