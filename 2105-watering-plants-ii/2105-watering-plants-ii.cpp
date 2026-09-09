class Solution {
public:
    int minimumRefill(vector<int>& plants, int capacityA, int capacityB) {
        int n=plants.size();
        int i=0,j=n-1;
        int refillA=0,refillB=0;
        int canA=capacityA;int canB=capacityB;
        while(i<j){
            if (plants[i]>canA){  ///can ke capacity kam hai refill karo can ko aur capacity ke bararbr karo
                refillA++;
                canA=capacityA;

            }
            if (plants[j]>canB){
                refillB++;
                canB=capacityB;
            }
            canA=canA-plants[i];
            canB=canB-plants[j];
            i++;
            j--;

        }
        if (i==j) ///both are on same plant///
        {
            if (canA<plants[i] && canB<plants[i]) refillA++;  
        }
return refillA+refillB;
    }
};