class Solution {
public:
    string minWindow(string s, string t) {
        if(t.size()>s.size()){
            return "";
        }
        vector<int> t_hash(58,0);
        vector<int> myWindow(58,0);
        for(int i=0;i<t.size();i++){
            t_hash[t[i]-'A']++;
        }
        int left = 0, right =0;
        int charLeft = 0;
        int rLeft =0, rRight=INT_MAX;
        while(right<s.size()){
            myWindow[s[right]-'A']++;
            charLeft = 0;
            for(int i=0;i<58;i++){
                charLeft += (t_hash[i]-myWindow[i])>0?t_hash[i]-myWindow[i]:0;
            }
            while(charLeft==0){
                if((rRight-rLeft)>(right-left)){
                    rRight = right;
                    rLeft = left;
                }
                myWindow[s[left]-'A']--;
                left++;
                charLeft = 0;
                for(int i=0;i<58;i++){
                    charLeft += (t_hash[i]-myWindow[i])>0?t_hash[i]-myWindow[i]:0;
                }
            }
            right++;
        }
        return rRight == INT_MAX ? "" : s.substr(rLeft, rRight-rLeft+1);
    }
};