class Solution {
public:
    string reverseVowels(string s) {
        vector<int> idx;
        
        // Collect indices of vowels
        for (int i = 0; i < s.size(); i++) {
            char c = tolower(s[i]);
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
                idx.push_back(i);
            }
        }
        
        // Reverse vowels using the collected indices
        for (int i = 0; i < idx.size() / 2; i++) {
            swap(s[idx[i]], s[idx[idx.size() - i - 1]]);
        }
        
        return s;
    }
};
