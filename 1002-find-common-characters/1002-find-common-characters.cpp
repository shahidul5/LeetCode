class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        int MAX_CHAR = 26;
        vector<int> minFreq(MAX_CHAR, INT_MAX);
        vector<string> result;
        
        for (const string& word : words) {
            vector<int> freq(MAX_CHAR, 0);
            for (char c : word) {
                freq[c - 'a']++;
            }
            for (int i = 0; i < MAX_CHAR; i++) {
                minFreq[i] = min(minFreq[i], freq[i]);
            }
        }
        
        for (int i = 0; i < MAX_CHAR; i++) {
            for (int j = 0; j < minFreq[i]; j++) {
                result.push_back(string(1, i + 'a'));
            }
        }
        
        return result;
    }
};
