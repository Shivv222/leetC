class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, int> container;

        for(int i=0;i<nums.size();i++){
            container[nums[i]]++;
            if(container[nums[i]]>= 2){
                return true;
            }
        }
        return false;
    }
};