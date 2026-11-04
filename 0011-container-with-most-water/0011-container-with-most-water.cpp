class Solution {
public:
    int maxArea(vector<int>& arr) {
        int n=arr.size();
        int maxAmount=0;
        int i=0,j=n-1;
        //max volume tab hota hai jab height minimum ho aur width max ho
        while(i<j){
            int width=j-i;
             int height=min(arr[i],arr[j]);
              int area=width*height;
            maxAmount=max(maxAmount,area);
            if (arr[i]<arr[j]) i++;
            else j--; 
        }
        return maxAmount;
        
    }
};