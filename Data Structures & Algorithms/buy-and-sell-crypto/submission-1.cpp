class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minVal = prices[0];
        int maxProfit = 0;
        for(int i=1;i<prices.size();i++){
            minVal = min(prices[i],minVal);
            printf("\n minVal = %d, maxProfit = %d, currProfit = %d",minVal, maxProfit,prices[i] - minVal);
            if((prices[i] - minVal)>maxProfit){
                maxProfit = prices[i]-minVal;
            }
        }
        return maxProfit;
    }
};
