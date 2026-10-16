class Solution {
public:
    int subarraySum(vector<int>& arr, int k) {
int n=arr.size();
vector<int> prefixSum(n,0);
prefixSum[0]=arr[0];
for(int i=1;i<n;i++){
    
     prefixSum[i]=arr[i]+prefixSum[i-1];   
}  
unordered_map<int,int> mp;
mp[0]=1;
int counter=0;
for(int j=0;j<n;j++){
    int target=prefixSum[j]-k;
    counter=counter+mp[target];
    mp[prefixSum[j]]++;

}  
return counter; 
    }
};