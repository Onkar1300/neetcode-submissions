class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> hash;
        for(int i=0;i<nums.size();i++){
            hash.insert(nums[i]);
        }

        int maxVal = 0;

        for(int i=0;i<nums.size();i++){
            int j=nums[i];
            int tempVal=1;
            j++;
            cout<<"Checking for "<<nums[i]<<endl;
            while(hash.count(j)){
                printf("%d ",j);
                j++;
                tempVal++;
            }
            cout<<endl;
            if(tempVal>maxVal){
                maxVal=tempVal;
            }
        }
        return maxVal;
    }
};
