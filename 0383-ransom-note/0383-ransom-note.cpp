class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        std::array<int, 26> freq{};

        for (char ch : magazine) {
            freq[ch - 'a']++;
        }

        for (char ch : ransomNote) {
            if (--freq[ch - 'a'] < 0) {
                return false;
            }
        }
        return true;
    }
};