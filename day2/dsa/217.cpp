class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, int> has {};

        for (int num : nums) {
            if (has.count(num)) return true;
            has[num] = 1;
        }
        return false;
    }
};