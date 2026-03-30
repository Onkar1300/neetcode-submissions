class Solution {
public:
    bool isPalindrome(string s) {
        int firstPointer =0;
        int lastPointer = s.size()-1;
        while(firstPointer<=lastPointer){
            cout<<"comparing "<<s[firstPointer]<<" and "<<s[lastPointer]<<endl;
            int val_first = (int)s[firstPointer];
            int val_last = (int)s[lastPointer];

            if( (val_first<48 || val_first>57) && 
                (val_first<65 || val_first>90) &&
                (val_first<97 || val_first>122)){
                firstPointer++;
                continue;
            }
            if( (val_last<48 || val_last>57) && 
                (val_last<65 || val_last>90) &&
                (val_last<97 || val_last>122)){
                lastPointer--;
                continue;
            }
            if(val_first>90){val_first-=32;}
            if(val_last>90){val_last-=32;}
            if(val_first == val_last){
                cout<<"valFirst "<<val_first<<" valLast "<<val_last<<endl;
                firstPointer++;
                lastPointer--;
            }
            else{
                return false;
            }
        }
        return true;
    }
};
