/*
 * @lc app=leetcode id=3 lang=cpp
 *
 * [3] Longest Substring Without Repeating Characters
 */

// @lc code=start
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<int> hash;
        int len=0;
        int maxLen = 0;
        int left = 0;
        int right = 0;
        
        hash.insert(s[left]);

        while(left<s.size() && right<s.size()){
            right++;
            if(right<s.size() && hash.count(s[right])==0 ){
                hash.insert(s[right]);
            }
            else{
                while(hash.count(s[right])>0 && left<s.size()){
                    hash.erase(s[left]);
                    left++;
                }
                if(left>0){
                    hash.insert(s[left-1]);
                }
            }
            if(hash.size()>maxLen){
                for(auto& ele:hash){
                    printf("%c ",ele);
                }
                cout<<endl;
                maxLen = hash.size();
            }
        }
        return maxLen;
    }
};
// @lc code=end
