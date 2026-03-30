class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int bp = prices[0];
        int profit = 0;
        int sp;

        for(int i=0;i<prices.size();i++){
            sp = prices[i];
            if(sp<bp){
                bp = sp;
            }
            if(sp - bp > profit){
                profit = sp-bp;
            }
        }
        return profit;
    }
};
