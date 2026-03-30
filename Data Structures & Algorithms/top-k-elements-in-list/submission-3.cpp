class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int arrSize=nums.size();

        vector<vector<int>> indexedArr(arrSize+1);

        unordered_map<int,int> hashTable;
        for(int i=0;i<arrSize;i++){
            hashTable[nums[i]]++;
        }
        for(auto &p:hashTable){
            indexedArr[p.second].push_back(p.first);
        }
        vector<int> result;
        
        for(int i=arrSize;i>0 && k>0;i--){
            if(indexedArr[i].size()>0){
                for(int j=0;j<indexedArr[i].size();j++){
                    result.push_back(indexedArr[i][j]);
                    k--;
                }
            }
        }
        return result;
    }
};
