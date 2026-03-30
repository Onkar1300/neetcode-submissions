class Solution {
public:
    bool isValid(string s) {
        std::stack<int> stk;
        for(int i=0;i<s.size();i++){
            if(s[i]=='(' || s[i] == '[' || s[i] == '{'){
                stk.push(s[i]);
            }
            else if (s[i]==')'){
                if(stk.empty() || stk.top()!='(' ){
                    return false;
                }
                stk.pop();
            }
            else if (s[i]==']'){
                if(stk.empty() || stk.top()!='['){
                    return false;
                }
                stk.pop();
            }else if (s[i]=='}'){
                if(stk.empty() || stk.top()!='{'){
                    return false;
                }
                stk.pop();
            }
        }
        if(!stk.empty()){
            return false;
        }
        return true;
    }
};
