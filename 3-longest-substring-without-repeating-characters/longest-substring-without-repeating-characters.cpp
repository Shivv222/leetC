class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size();
        int left=0;
        int res=0;
        unordered_map<char,int>f;

        for(int right=0;right<n;right++){
            f[s[right]]++;
            int k=right-left+1;
            while(f.size()<k){
                f[s[left]]--;
                if(f[s[left]]==0)
                f.erase(s[left]);
                left++;
                k=right-left+1;
            }
            int len=right-left+1;
            res=max(res,len);
        }
        return res;
    }
};