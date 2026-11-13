class Solution {
public:
    int bsearch(vector<int>& nums, int low, int high, int target){
        int mid;
        while(low<high){
            mid = (low+high)/2;
            if(target == nums[mid]){
                return mid;
            }
            else if(target>nums[mid]){
                low = mid+1;
            }
            else{
                high = mid;
            }
        }
        if(low==high && nums[low]!=target){return -1;}
        return low;
    }
    int search(vector<int>& nums, int target) {
        int low = 0;
        int high = nums.size()-1;
        int mid;
        while(low<high){
            mid = low + (high-low)/2;
            if(nums[mid]<nums[high]){
                // right half is sorted
                high = mid;
            }
            else{
                // left half is sorted
                low = mid+1;
            }
        }
        // smallest element is on high or low
        mid = low;
        low = 0;
        high = nums.size()-1;
        int val = bsearch(nums, low, mid, target);
        if(val==-1){ val = bsearch(nums, mid, high, target);}
        return val;
    }
};
