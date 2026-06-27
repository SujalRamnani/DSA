class Solution {
public:
    int maxAbsoluteSum(vector<int>& arr) {
        int result=arr[0];
        int bestEnding=arr[0];
        int n=arr.size();
        for(int i=1;i<n;i++){
            int choice1=arr[i];
            int choice2=bestEnding+arr[i];
  bestEnding=max(choice1,choice2);
            result=max(result,bestEnding);
        }
        int ans1=abs(result);


         int result2=arr[0];
        int bestEnding2=arr[0];
      
        for(int i=1;i<n;i++){
            int choice1=arr[i];
            int choice2=bestEnding2+arr[i];
            bestEnding2=min(choice1,choice2);

            result2=min(result2,bestEnding2);
        }
        int ans2=abs(result2);

        int finalAns=max(ans1,ans2);
        return finalAns;


        
    }
};