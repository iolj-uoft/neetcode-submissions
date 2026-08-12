class Solution {
public:
    bool isAnagram(string s, string t) {
        std::unordered_map<char, int> countS;
        std::unordered_map<char, int> countT;

        if (s.length() != t.length()) {
            return false;
        }

        for (size_t i = 0; i < s.length(); i++) {
            countS[s[i]]++;
            countT[t[i]]++;
        }

        if (countS == countT) {
            return true;
        } 
        else {
            return false;
        }
    }
};
