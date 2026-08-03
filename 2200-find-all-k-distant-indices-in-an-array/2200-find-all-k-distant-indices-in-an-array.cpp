class Solution {
public:
    vector<int> findKDistantIndices(vector<int>& arr, int key, int k) {
         vector<int> ans;
       
// int j=-1;
//ek se jyada ho sakta hai aur hai hi key so array mein store karo 
vector<int> store;
         for(int i=0;i<arr.size();i++) {
            if (arr[i]==key){
                store.push_back(i);
            //ek se jyada bhi ho sakte hai isliye break nhhi karna
            }
         }
   
   for(int i=0;i<arr.size();i++){
   for(int j=0;j<store.size();j++){
    if (abs(i-store[j])<=k) {
        ans.push_back(i);
        break;
    }
   }
   }
   return ans;
        
    }
};