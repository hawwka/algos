class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int, pair<int, int>> map;
        for (int i = 0; i < nums.size(); ++i){
            if (map.contains(nums[i])){
                return {i, map[nums[i]].second};            
            } 
            map[target - nums[i]] = std::pair<int, int>{nums[i], i};
        }
        return {};
    }
};
