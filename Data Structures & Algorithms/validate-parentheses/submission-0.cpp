/*
 * @lc app=leetcode id=20 lang=cpp
 *
 * [20] Valid Parentheses
 */

// @lc code=start
class Solution {
public:
    bool isValid(string s) {
        stack<int> arr;
        for(int i=0;i<s.size();i++){
            switch(s[i]){
                case '[':
                    arr.push(1);
                    break;
                case ']':
                    if(arr.empty()){
                        return false;
                    }
                    else{
                        if(arr.top() == 1)
                            arr.pop();
                        else
                            return false;
                    }
                    break;
                case '(':
                    arr.push(2);
                    break;
                case ')':
                    if(arr.empty()){
                        return false;
                    }
                    else{
                        if(arr.top() == 2)
                            arr.pop();
                        else
                            return false;
                    }
                    break;
                case '{':
                    arr.push(3);
                    break;
                case '}':
                    if(arr.empty()){
                        return false;
                    }
                    else{
                        if(arr.top() == 3)
                            arr.pop();
                        else
                            return false;
                    }
                    break;
            }
        }
        if(arr.empty()){
            return true;
        }
        return false;
    }
};

// @lc code=end

