class Solution {
public:
    string longestPalindrome(string s) {
        int fi=1,fj=0;
        for(int i=0;i<s.size();i++){
            int l=i, r=i;
            while(l>=0 && r<=s.size()-1 && s[l]==s[r]){
                if(r-l+1>fj-fi+1){
                    fj=r;fi=l;
                }
                l--;
                r++;
            }
            l=i;r=i+1;
            while(l>=0 && r<=s.size()-1 && s[l]==s[r]){
                if(r-l+1>fj-fi+1){
                    fj=r;fi=l;
                }
                l--;
                r++;
            }
        }
        printf("fi=%d, fj=%d\n",fi,fj);
        string fStr="";
        while(fi<=fj){
            fStr+=s[fi];
            fi++;
        }
        return fStr;
    }
};