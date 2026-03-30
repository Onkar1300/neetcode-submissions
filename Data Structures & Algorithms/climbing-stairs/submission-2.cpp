class Solution {
public:
    int climbStairs(int n) {
        int i=0;
        unordered_map<int,int> hash;
        hash[1] = 1;
        hash[2] = 2;
        hash[0] = 0;
        for(int i=3;i<=n;i++){
            hash[i] = hash[i-1] + hash[i-2];
        }
        return hash[n];
    }
};
