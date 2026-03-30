class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> answer;
        sort(nums.begin(),nums.end());

        for(int i=0;i<nums.size();i++){
            if(i>0 && nums[i-1]==nums[i]){
                continue;
            }
            int j = i+1;
            int k = nums.size()-1;
            while(j<k){
                int target = -nums[i];
                if(nums[j]+nums[k]<target){
                    j++;
                }
                else if(nums[j]+nums[k]>target){
                    k--;
                }
                else{
                    vector<int> entity;
                    entity.push_back(nums[i]);
                    entity.push_back(nums[j]);
                    entity.push_back(nums[k]);
                    answer.push_back(entity);
                    
                    while(j+1<k && nums[j+1]==nums[j]){
                        j++;
                    }
                    while(k-1>j && nums[k-1]==nums[k]){
                        k--;
                    }
                    j++;
                    k--;
                }
            }
        } 
        return answer;  
    }
};
