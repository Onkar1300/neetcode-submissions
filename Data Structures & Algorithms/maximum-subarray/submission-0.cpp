class Solution {
public:
    int subSol(int first, int second, vector<int> &nums, int total){
        if(first==second){
            return nums[first];
        }
        else{
            return max(total, max(subSol(first,second-1,nums,total-nums[second]), 
            subSol(first+1,second,nums,total-nums[first])));
        }
    }
    int maxSubArray(vector<int>& nums) {
        int total = 0;
        for(int i=0;i<nums.size();i++){
            total+=nums[i];
        }
        return subSol(0,nums.size()-1,nums,total);
    }
};
