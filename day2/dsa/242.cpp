class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> has {};
        for (char c : s) has[c]++;
        for (char c : t) {
            if (!(has.count(c)) || has[c] == 0) return false;
            has[c]--;
        }
        for (auto &it : has) {
            if (it.second > 0) return false;
        }
        return true;
    }
};