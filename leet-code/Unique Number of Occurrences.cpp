class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> freqCount;

        for(auto num: arr)
        {
            freqCount[num]++;
        }

        unordered_set<int> occ;
        for(const auto val: freqCount)
        {
            if(!occ.insert(val.second).second){return false;}
        }
        
        return true;
    }
};
