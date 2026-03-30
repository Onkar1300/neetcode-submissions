class Solution {
public:
    int findMin(vector<int> &nums) {

        int index = nums[0];
        int low =0;
        int high = nums.size()-1;
        int mid=0;
        
        while(low<=high){
            if (nums[low] < nums[high]) {
                index = min(index, nums[low]);
                break;
            }
            mid = low + (high-low)/2;
            index = min(index,nums[mid]);
            if(nums[mid]>=nums[low]){
                low = mid+1;
            }
            else{
                high = mid-1;
            }
        }
        return index;
    }
};
