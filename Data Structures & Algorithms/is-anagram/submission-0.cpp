class Solution {
public:
    bool isAnagram(string s, string t) {
        int s_count[26], t_count[26];
        for(int i=0;i<26;i++){
            s_count[i]=0;
            t_count[i]=0;
        }
        for(int i=0;i<s.size();i++){
            int index = (int)s[i]-97;
            s_count[index]++;
        }
        for(int i=0;i<t.size();i++){
            int index = (int)t[i]-97;
            t_count[index]++;
        }
        for(int i=0;i<26;i++){
            if(s_count[i] != t_count[i]){
                return false;
            }
        }
        return true;
    }
};
