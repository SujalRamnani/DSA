class Solution {
public:
    int maxSubArray(vector<int>& arr) {
        int n=arr.size();
        int ans=arr[0];
        int bestEnding=arr[0];
        for(int i=1;i<n;i++){
            //har index ke pass 2 choice hogi
            int choice1=bestEnding+arr[i]; //ya toh pehle wale mein judd jao
            int choice2=arr[i]; //ya toh apna naya khudka start karo
            bestEnding=max(choice1,choice2);
            ans=max(ans,bestEnding);
        }
        return ans;
        
    }
};