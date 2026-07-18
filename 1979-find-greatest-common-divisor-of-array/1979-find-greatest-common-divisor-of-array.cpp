class Solution {
public:
int min(int a,int b){
    if (a<b) return a;
    else return b;
}
    int findGCD(vector<int>& arr) {
        int n=arr.size();
        int maxi=INT_MIN;
        for(int i=0;i<n;i++){
            if (maxi<arr[i]) maxi=arr[i];
        }

        int mini=INT_MAX;
        for(int i=0;i<n;i++){
            if (mini>arr[i]) mini=arr[i];
        }

        int a=maxi;int b=mini;
        int hcf=-1;

        for(int i=1;i<=min(a,b);i++){
            if (a%i==0 && b%i==0){
                hcf=i;
              
            }
        }
        return hcf;
    }
};