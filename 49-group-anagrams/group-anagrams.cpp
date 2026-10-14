class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mpp;
        for(int i=0;i<strs.size();i++){
            string currval = strs[i];
            string sortval = currval;
            sort(sortval.begin(), sortval.end());
            mpp[sortval].push_back(currval);
        }
        vector<vector<string>> result;
        for(auto i: mpp){
            result.push_back(i.second);
        }
        return result;
    }
};