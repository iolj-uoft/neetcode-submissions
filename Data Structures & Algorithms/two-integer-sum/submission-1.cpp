class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<size_t, int> nums_map;

        for (size_t i = 0; i < nums.size(); i++) {
            int diff = target - nums[i];
            if (nums_map.contains(diff)) {
                return {nums_map[diff], (int)i};
            }
            nums_map[nums[i]] = (int)i;
        }
        return {};
    }
};
