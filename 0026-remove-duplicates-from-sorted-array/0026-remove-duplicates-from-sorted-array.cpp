class Solution {
public:
    int removeDuplicates(vector<int>& arr) {
    //     int n=arr.size();
    //     set<int> st;
    //     for(int i=0;i<n;i++) st.insert(arr[i]);
       
    //    int indx=0;
    //    for(auto it:st){
    //     arr[indx]=it;
    //     indx++;
    //    }
    //    return indx;
    int n=arr.size();
    int i=0;
    for(int j=1;j<n;j++){
        if (arr[j]!=arr[i]){
            swap(arr[i+1],arr[j]);
            i++;
        }
    }
      return i+1;  
    }
};