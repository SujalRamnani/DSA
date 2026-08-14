class Solution {
public:
    int threeSumClosest(vector<int>& arr, int target) {
        //3 no ko jodd ke pata karna hai konsa target se sabse nazdik hai//
        int n=arr.size();
          //sort karne pe fayda hai aur index nhi manga toh kardo
        sort(arr.begin(),arr.end());
        int closest=100000;
        for(int i=0;i<n;i++){
            int n1=arr[i];
            int p=i+1;int q=n-1;
            while(p<q){
                int sum=n1+arr[p]+arr[q];
                  if (abs(target-sum)<abs(target-closest))   closest=sum;     
               if (sum<target) p++;
                else q--;
            }
        }
        return closest;
        
    }
};