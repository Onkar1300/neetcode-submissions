using namespace std;
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> hashMap;
        for(int i=0;i<strs.size();i++){
            int arr[26] = {0};
            for(int j=0;j<strs[i].size();j++){
                arr[strs[i][j]-97]++;
            }
            string s ="";
            for(int j=0;j<26;j++){
                s+=arr[j];
            }
            hashMap[s].push_back(strs[i]);
        }
        vector<vector<string>> ANS;
        for (const auto& pair : hashMap) {
            ANS.push_back(pair.second);
        }
        return ANS;
    }
};
