class Solution {
public:

    string encode(vector<string>& strs) {
        string f_str = "";
        for(int i=0;i<strs.size();i++){
            f_str += (strs[i].size());
            f_str += strs[i];
        }
        return f_str;
    }

    vector<string> decode(string s) {
        vector<string> f;
        int i=0;
        while(i<s.size()){
            string str = "";
            int j = (unsigned char)s[i];
            i++;
            while(j--){
                str+=s[i];
                i++;
            }
            f.push_back(str);
        }
        return f;
    }
};
