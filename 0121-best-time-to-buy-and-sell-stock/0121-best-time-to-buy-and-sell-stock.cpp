class Solution {
public:
    int maxProfit(vector<int>& prices) {
        //consider every day as a selling day
        int n=prices.size();
        int maxProfit=0;
        //profit kab hoga jab buy minimum ho aur profit maximum ho
        int minBuy=prices[0];
        for(int i=1;i<n;i++){
            if (prices[i]>minBuy){
                int profit=prices[i]-minBuy;
                maxProfit=max(maxProfit,profit);
            }
            else minBuy=min(minBuy,prices[i]);
        }
        return maxProfit;
        
    }
};