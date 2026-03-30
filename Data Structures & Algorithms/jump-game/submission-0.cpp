class Solution {
public:
    bool canJump(vector<int>& nums) {
        int index = nums.size()-2;
        int goal = nums.size()-1;

        while(index>=0){
            if(index+nums[index]>=goal){
                goal = index;
            }
            index--;
        }

        if(goal==0){
            return true;
        }
        return false;
    }
};
