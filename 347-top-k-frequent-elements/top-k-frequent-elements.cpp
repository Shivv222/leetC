class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mpp;
        for(int i=0;i<nums.size();i++){
            mpp[nums[i]]++;
        }
        vector<vector<int>> container(nums.size()+1);
        for(auto i: mpp){
            int num=i.first;
            int freq=i.second;
            container[freq].push_back(num);
        }
        vector<int> result;
        for(int freq= nums.size();freq>=1;freq--){
            for(int j=0;j<container[freq].size();j++){
                result.push_back(container[freq][j]);
                if(result.size()==k){
                    return result;
                }
                }
            }
            return result;
        }
};