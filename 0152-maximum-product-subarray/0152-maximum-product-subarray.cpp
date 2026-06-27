class Solution {
public:
    int maxProduct(vector<int>& arr) {
        // int n=arr.size();
        // int bestMaxEnding=arr[0];
        // int bestMinEnding=arr[0];
        // int result=arr[0];
        // for(int i=1;i<n;i++){
        //     ///current i index ke pass 3 choice hai
        //     int choice1=arr[i]; ///akela reh le
        //     int choice2=arr[i]*bestMinEnding;    ////minEnding ke saath mil jaye
        //      int choice3=arr[i]*bestMaxEnding;    ////maxEnding ke saath mil jaye

        //      bestMinEnding=min(choice1,min(choice2,choice3));
        //      bestMaxEnding=max(choice1,max(choice2,choice3));

        //      ///result mein max pucha hai max product subarray
        //      result=max(result,max(bestMinEnding,bestMaxEnding));
        // }
        // return result;


        int n=arr.size();
        int result=arr[0];
        int bestMinEnding=arr[0];
        int bestMaxEnding=arr[0];
        for(int i=1;i<n;i++){
            int choice1=arr[i];
            int choice2=arr[i]*bestMinEnding;
            int choice3=arr[i]*bestMaxEnding;

            bestMaxEnding=max(choice1,max(choice2,choice3));
             bestMinEnding=min(choice1,min(choice2,choice3));

             result=max(result,max(bestMaxEnding,bestMinEnding));

        }
        return result;
    }
};