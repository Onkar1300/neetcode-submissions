class Solution {
public:
    int bsearch(vector<int> nums, int left, int right){
        if(left!=right){
            return min(bsearch(nums,left,left + (right-left)/2), 
                        bsearch(nums,left + (right-left)/2+1,right));
        }
        else{
            return nums[left];
        }
    }
    int findMin(vector<int>& nums) {
        return bsearch(nums,0,nums.size()-1);
    }
};