class Solution {
public:
    double findMedianSortedArrays(vector<int>& a, vector<int>& b) {
        int m=a.size();
        int n=b.size();

        //median ke liye pehle dono array ko merge karo fir bich wala banda nikalo//
        vector<int> ans;
        int i=0,j=0;
        while(i<m && j<n){
            if (a[i]<=b[j]){
                ans.push_back(a[i]);
                i++;
            }
            else{
                ans.push_back(b[j]);
                j++;
            }
        }
        if (i==m){
            while(j<n){
               ans.push_back(b[j]);
                j++; 
            }
        }
        if (j==n){
            while(i<m){
                ans.push_back(a[i]);
                i++;
            }
        }
        int k=ans.size();
        if (k%2!=0) return ans[k/2]; //odd size ka hai ans array toh bich wala hi median hoga
        else if (k%2==0){
            //even size ka hai ans array toh 2 median honge
            double mid1=ans[k/2];
            double mid2=ans[k/2-1];
            double ans=(mid1+mid2)/2;
            return ans;
        }
        return -1;
        
    }
};