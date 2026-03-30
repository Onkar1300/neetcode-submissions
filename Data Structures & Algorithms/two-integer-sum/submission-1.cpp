class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
     unordered_map<int,vector<int>> index_mapping;   
     unordered_map<int,int> frequency_mapping;

     for(int i=0;i<nums.size();i++){
        index_mapping[nums[i]].push_back(i);
        if(frequency_mapping[nums[i]]==0){
            frequency_mapping[nums[i]]=1;
        }
        else{
            frequency_mapping[nums[i]]++;
        }
     }
    vector<int> results;
     for(int i=0;i<nums.size();i++){
        int val = target-nums[i];
        if(frequency_mapping[val]>0){
            if(val==nums[i]){
                if(frequency_mapping[val]>1){
                    results.push_back(index_mapping[val][1]);
                    results.push_back(index_mapping[val][0]);
                    break;
                }
            }
            else{
                    results.push_back(index_mapping[nums[i]][0]);
                    results.push_back(index_mapping[val][0]);
                    break;
            }
        }
     }
     sort(results.begin(),results.end());
     return results;
    }
};
