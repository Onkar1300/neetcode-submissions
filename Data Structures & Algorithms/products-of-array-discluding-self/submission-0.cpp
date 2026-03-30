class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> prev(nums.size());
        vector<int> next(nums.size());
        prev[0] = nums[0];
        next[nums.size()-1]=nums[nums.size()-1];

        cout<<prev[0]<<" ";
        for(int i=1;i<nums.size();i++){
            prev[i] = prev[i-1]*nums[i];
            cout<<prev[i]<<" ";
        }
        cout<<endl;
        for(int i=nums.size()-2;i>=0;i--){
            next[i] = next[i+1]*nums[i];
        }
        for(int i=0;i<nums.size();i++){
            cout<<next[i]<<" ";
        }

        vector<int> result(nums.size());
        int prevIndex = -1;
        int nextIndex = 1;

        for(int i=0;i<nums.size();i++){
            cout<<"calculating for i = "<<i<<endl;
            cout<<"values of prev:"<<prevIndex<<" and next:"<<nextIndex<<endl;
            int res = 1;
            if(prevIndex>=0 && prevIndex<nums.size()){
                res = res * prev[prevIndex];
            }
            if(nextIndex>=0 && nextIndex<nums.size()){
                res = res * next[nextIndex];
            }
            prevIndex++;
            nextIndex++;
            result[i] = res;
            cout<<"--------eoi------\n";
        }

        return result;

    }
};
