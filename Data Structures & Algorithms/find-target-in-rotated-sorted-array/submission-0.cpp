class Solution {
public:
    int bsearch(vector<int> nums, int left, int right, int target){
        if(left==right){
            if(nums[left]==target){
                return left;
            }
            else{
                return -1;
            }
        }
        return max(bsearch(nums,left,left + (right-left)/2 ,target), 
                bsearch(nums,left + (right-left)/2+1,right,target));
    }
    int search(vector<int>& nums, int target) {
        return bsearch(nums,0,nums.size()-1, target);
    }
};