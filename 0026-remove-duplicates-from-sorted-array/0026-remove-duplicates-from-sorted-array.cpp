class Solution {
public:
    int removeDuplicates(vector<int>& arr) {
        int n=arr.size();
        set<int> st;
        for(int i=0;i<n;i++) st.insert(arr[i]);
       
       int indx=0;
       for(auto it:st){
        arr[indx]=it;
        indx++;
       }
       return indx;
        
    }
};