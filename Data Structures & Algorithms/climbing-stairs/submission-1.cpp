class Solution {
public:
    unordered_map<int,long long> hash;
    long long hash_fact(int n){
        if(hash.count(n)>0){
            return hash[n];
        }
        long long res = hash_fact(n-1) + hash_fact(n-2);
        hash[n] = res;
        return res;
    }
    int climbStairs(int n) {
        hash[1] = 1;
        hash[2] = 2;
        
        return hash_fact(n);
    }
};
