class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_map<int,int> hash;
        if(nums.size()==0){return 0;}
        for(int i=0;i<nums.size();i++){
            hash[nums[i]] = 1;
        }
        int idx = 0;
        int ele = nums[idx];
        int count = 1;
        int maxCount =0;
        while(idx<nums.size()){
            if(hash.count(ele-1)<=0){
                while(hash.count(ele+1)>0){
                    cout<<"ele is "<<ele<<endl;
                    count++;
                    ele++;
                }
                cout<<"Done. . . "<<endl;
                maxCount=max(count,maxCount);
                count =1;
            }
            idx++;
            ele = nums[idx];
        }
        return maxCount;
    }
};
