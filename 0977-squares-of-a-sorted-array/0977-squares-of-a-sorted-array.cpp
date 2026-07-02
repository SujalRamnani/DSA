class Solution {
public:
    vector<int> sortedSquares(vector<int>& arr) {
        // int n=arr.size();
        // for(int i=0;i<n;i++) arr[i]*=arr[i];
        // sort(arr.begin(),arr.end());
        // return arr;


      
        vector<int> neg;
        vector<int> pos;
        for(int i=0;i<arr.size();i++) {
            if (arr[i]<0) neg.push_back(arr[i]);
            else pos.push_back(arr[i]);
        }
        
        for(int i=0;i<neg.size();i++) neg[i]=neg[i]*neg[i];sort(neg.begin(),neg.end());
          for(int i=0;i<pos.size();i++) pos[i]=pos[i]*pos[i];

          int m=neg.size();int n=pos.size();
int i=0,j=0;vector<int> ans;
while(i<m && j<n){
    if (neg[i]<=pos[j]){
        ans.push_back(neg[i]);
        i++;

    }
    else{
         ans.push_back(pos[j]);
        j++;

    }
}

while(j<n){
      ans.push_back(pos[j]);
        j++;

}
while(i<m){
   ans.push_back(neg[i]);
        i++;  
}
return ans;
        

        
    }
};