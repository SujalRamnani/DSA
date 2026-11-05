class Solution {
public:
    void merge(vector<int>& a, int m, vector<int>& b, int n) {
        //jo bada hai vo baadme chote pehle
        int i=m-1;int j=n-1;
        int indx=m+n-1;
        while(i>=0 && j>=0){
            if (a[i]>=b[j]){
                a[indx]=a[i];
                indx--;
                i--;
            }
            else if (b[j]>=a[i]){
                a[indx]=b[j];
                indx--;
                j--;
            }
        }
        while(j>=0){
             a[indx]=b[j];
                indx--;
                j--;
        }
        
    }
};