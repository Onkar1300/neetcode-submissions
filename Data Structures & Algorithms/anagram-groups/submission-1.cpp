class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> hashtable;

        for(int i=0;i<strs.size();i++){
            string identity = strs[i];
            sort(identity.begin(),identity.end());
            hashtable[identity].push_back(strs[i]);
        }
        vector<vector<string>> result;
        for(auto& p : hashtable) {
            result.push_back(p.second);
        }
        return result;
    }
};
