/*
 * @lc app=leetcode id=424 lang=cpp
 *
 * [424] Longest Repeating Character Replacement
 */

// @lc code=start
class Solution {
public:
    int characterReplacement(string s, int k) {
        int left = 0;
        int size = 0;
        unordered_map<int, int> hash;
        int maxf = 0;
        for (int right=0;right<s.size();right++) {
            hash[s[right]]++;
            maxf = max(maxf, hash[s[right]]);
            while ((right - left + 1) - maxf > k) {
                hash[s[left]]--;
                left++;
            }
            size = max( size, right - left + 1);
        }
        return size;
    }
};
// @lc code=end
