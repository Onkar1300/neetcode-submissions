class Solution {
public:
    unordered_map<int,int> hash;
    int calcHash(vector<int>& coins,int amount){
        if(hash.count(amount)!=0){
            return hash[amount];
        }
        else{
            if(amount<0){
                return INT_MAX;
            }
            int minimum = INT_MAX;
            for(int i=0;i<coins.size();i++){
                int res = calcHash(coins, amount-coins[i]);
                if(res!=INT_MAX){
                    minimum = min(minimum, res+1);
                }
            }
            hash[amount] = minimum;
            return minimum;
        }
    }
    int coinChange(vector<int>& coins, int amount) {
        hash[0] = 0;
        if(calcHash(coins,amount)==INT_MAX){
            return -1;
        }
        else{
            return calcHash(coins,amount);
        }
    }
};
