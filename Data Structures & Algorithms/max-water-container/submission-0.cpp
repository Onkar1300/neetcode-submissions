class Solution {
public:
    int maxArea(vector<int>& arr) {
        int i =0;
        int j = arr.size()-1;
        int maxWater = 0;

        while(i<j){
            // width = j-i;
            // height = min(i,j)
            int water = (j-i)*(min(arr[i],arr[j]));
            printf("\nWater for %d and %d is %d",i,j,water);
            if(water>maxWater){
                maxWater = water;
            }
            if(arr[i]<arr[j]){
                i++;
            }
            else{
                j--;
            }
        }
        return maxWater;
    }
};
