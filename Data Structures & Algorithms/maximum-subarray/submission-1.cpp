class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int tempMax = 0;
        int finalMax = nums[0];
        for(int i=0;i<nums.size();i++){
            tempMax = max(nums[i],nums[i]+tempMax);
            finalMax = max(tempMax, finalMax);
        }
        return finalMax;
    }
};
