class Solution {
public:
    int minimumRefill(vector<int>& plants, int capacityA, int capacityB) {
        int n=plants.size();
        int i=0,j=n-1;
        int capA=capacityA,capB=capacityB;
        int refilA=0,refilB=0;
        while(i<j){
            if (plants[i]>capA){
                ///refill karna padega
                refilA++;
                capA=capacityA;
            }
            if (plants[j]>capB){
                //refill karna padega
                refilB++;
                capB=capacityB;
            }
            //pani dediya dono ne
            capA=capA-plants[i];
            capB=capB-plants[j];
            i++;
            j--;
        }

        if(i==j){
            if(capA<plants[i] && capB<plants[j]) {
                if (capA>=capB) refilA++;
                else refilB++;
            }
        }
        return refilA+refilB;
        
    }
};