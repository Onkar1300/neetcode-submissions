class Solution {
public:
    int rob(vector<int>& nums) {
        if(nums.size()==1){
            return nums[0];
        }
        else if(nums.size()==2){
            return max(nums[0],nums[1]);
        }
        vector<int> arr;
        arr.push_back(nums[0]);
        arr.push_back(nums[1]);
        arr.push_back(nums[2]+nums[0]);
        for(int i=3;i<nums.size();i++){
            arr.push_back(max(arr[i-3]+nums[i],max(arr[i-2]+nums[i],arr[i-1])));
        }
        return max(arr[nums.size()-2],arr[nums.size()-1]);
    }
};
