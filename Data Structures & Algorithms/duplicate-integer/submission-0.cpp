class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::unordered_set<int> seen_num;

        for (int num : nums) {
            if (seen_num.count(num)) {
                return true;
            }

            seen_num.insert(num);
        }
        return false;
    }
};