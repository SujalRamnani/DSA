class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
       
        int m=boxTypes.size();
        int n=boxTypes[0].size();
       
       sort(boxTypes.begin(),boxTypes.end(),
       [](vector<int> &a,vector<int> &b){
        return a[1]>b[1];  //jo bada hai usko pehle rakho
       });
       
       int ans=0;
       for(int i=0;i<m;i++){
        int boxes=boxTypes[i][0];
        int units=boxTypes[i][1];
        int take=min(boxes,truckSize);
        ans+=take*units;

        truckSize-=take;

        if (truckSize==0) break;


       }
       return ans;

    }
};