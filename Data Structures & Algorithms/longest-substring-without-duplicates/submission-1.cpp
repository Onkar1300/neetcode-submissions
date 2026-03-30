class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<int,int> hash;
        int i = 0;
        int maxSize = 0;
        while(i<s.size()){
            int val = (int)s[i];
            if(hash.count(val)==0){
                hash[val] = i;
                i++;
                maxSize = max(maxSize,(int)hash.size());
            }
            else{
                maxSize = max(maxSize,(int)hash.size());
                i = hash[val]+1;
                hash.clear();
            }
        }
        return maxSize;
    }
};
