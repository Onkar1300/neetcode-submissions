class Solution {
public:
    bool canJump(vector<int>& nums) {
        vector<int> v(nums.size(),0);
        v[0]=1;

        for(int i=0;i<nums.size();i++){
            if(v[i]==1){
                for(int j=0;j<=i+nums[i] && j<nums.size();j++){
                    v[j]=1;
                }
            }
        }
        return v[nums.size()-1]==1;
    }
};
