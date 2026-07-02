class Solution {
public:
    int removeElement(vector<int>& arr, int val) {
int n=arr.size();
int j=-1;
for(int i=0;i<n;i++){
    if (arr[i]==val){
        j=i;
        break; //1st occurence milgya

    }
}   
if (j<0) return n;
for(int i=j+1;i<n;i++){
    if (arr[i]!=val){
        swap(arr[i],arr[j]);
        j++;
    }
}  
return j;   
    }
};