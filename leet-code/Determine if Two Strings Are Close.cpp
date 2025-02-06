class Solution {
public:
    bool closeStrings(string word1, string word2) {
        if(word1.size() != word2.size()){return false;}
        else
        {
            unordered_map<char, int> freq1, freq2;

            for(auto ch:word1){freq1[ch]++;}
            for(auto ch:word2){freq2[ch]++;}

            if(freq1.size() != freq2.size()){return false;}

            for(auto [ch, _]:freq1)
            {
                if(freq2.find(ch) == freq2.end())
                {
                    return false;
                }
            }

            vector<int> freqCount1, freqCount2;
            for(auto [_, count]:freq1){freqCount1.push_back(count);}
            for(auto [_, count]:freq2){freqCount2.push_back(count);}

            sort(freqCount1.begin(), freqCount1.end());
            sort(freqCount2.begin(), freqCount2.end());

            return freqCount1==freqCount2;
        }
    }
};
