class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()){
            return false;
        }

        unordered_map<char, int> sun;
        unordered_map<char, int> moon;

        for(int i=0;i<s.size();i++){
            sun[s[i]]++;
            moon[t[i]]++;
        }
        for(int i=0;i<s.size();i++){
        if (sun[t[i]]!=moon[t[i]]){
            return false;
        }}
        return true;
    }
};