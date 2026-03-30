class Solution {
public:
    int rob(vector<int>& nums) {
        unordered_map<int,int> hash;

        hash[0] = nums[0];  //Robbed first house
        if(nums.size()==1){
            return nums[0];
        }
        hash[1] = max(nums[0], nums[1]); //Robbed second house
        if(nums.size()==2){
            return max(nums[1],nums[0]);
        }
        for(int i=2;i<nums.size();i++){
            hash[i] = max(hash[i-1],nums[i]+hash[i-2]);
        }
        return hash[nums.size()-1];
    }
};
