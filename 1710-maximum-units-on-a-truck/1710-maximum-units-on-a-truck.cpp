class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        int m=boxTypes.size();
        int n=boxTypes[0].size();
          
          //sorting using comparator descending sorting
        sort(boxTypes.begin(),boxTypes.end(),
        [] (vector<int> &a,vector<int> &b){
            return a[1]>b[1];
        });

        int ans=0;
        for(int i=0;i<m;i++){
            int boxes=boxTypes[i][0];
            int units=boxTypes[i][1];

            //abb boxes select karo jiska second wala jyada usko lo
            int selectBox=min(boxes,truckSize);
            ans+=selectBox*units;

            truckSize-=selectBox;
            if (truckSize==0) break;


        }
        return ans;
        
    }
};