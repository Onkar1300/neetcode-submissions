class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int,int> hashtable;
        bool value = false;
        for(int i=0;i<nums.size() && !value;i++){
            if(hashtable.find(nums[i])==0){
                hashtable[nums[i]]=1;
            }
            else{
                value = true;
            }
        }
        return value;
    }
};