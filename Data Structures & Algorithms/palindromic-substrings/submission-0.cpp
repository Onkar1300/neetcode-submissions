class Solution {
public:
    int countSubstrings(string s) {
    int total = s.size();
    int fi=1,fj=0;
        for(int i=0;i<s.size();i++){
            int l=i-1, r=i+1;
            while(l>=0 && r<=s.size()-1 && s[l]==s[r]){
                if(r-l+1>fj-fi+1){
                    fj=r;fi=l;
                }
                l--;
                r++;
                total++;
            }
            l=i;r=i+1;
            while(l>=0 && r<=s.size()-1 && s[l]==s[r]){
                if(r-l+1>fj-fi+1){
                    fj=r;fi=l;
                }
                l--;
                r++;
                total++;
            }
        }
        
        return total;
    }
};
