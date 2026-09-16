class Solution {
public:
    int characterReplacement(string s, int k) {
        int first = 0;
        int second = 0;
        int len = s.size();
        vector<int> currVector(26,0);

        int available = k;
        int maxSize = second - first;

        while (second < len) {
            // 1. Add the current right-side character FIRST
            currVector[s[second] - 'A']++;
            
            // 2. The sum of all characters in the window is just the window size
            int currSum = second - first + 1; 
            
            // 3. Find the most frequent character in the current window
            int maxFreq = *max_element(currVector.begin(), currVector.end());
            int CurrVal = currSum - maxFreq;

            // 4. If replacements exceed k, shrink the window from the left
            if (CurrVal > k) {
                currVector[s[first] - 'A']--;
                first++; // Remove the left-most char and shrink
            }
            
            // 5. Update maxSize (the window is now guaranteed to be valid or the same size)
            maxSize = max(maxSize, second - first + 1);
            
            // 6. Expand the window
            second++;
        }
        return maxSize;
    }
};