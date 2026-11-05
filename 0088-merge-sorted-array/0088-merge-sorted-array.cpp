class Solution {
public:
    void merge(vector<int>& a, int m, vector<int>& b, int n) {
        int indx=m+n-1;
        int i=m-1;int j=n-1;

        while(i>=0 && j>=0){
            if (a[i]>=b[j]){
                a[indx]=a[i];
                indx--;
                i--;
            }
            else{
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