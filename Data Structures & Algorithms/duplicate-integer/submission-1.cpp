class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int,int> hash;
        for(int i=0;i<nums.size();i++){
            if(hash.find(nums[i])==hash.end()){
                hash[nums[i]]=1;
            }
            else{
                hash[nums[i]]++;
            }
        }
        if(hash.size()<nums.size()){
            return true;
        }
        return false;
    }
};