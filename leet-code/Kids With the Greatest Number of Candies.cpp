class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        
        int maxCandy = *max_element(candies.begin(), candies.end());
        
        for(int i=0; i<candies.size(); i++)
        {
            candies[i] = candies[i]+extraCandies;
        }

        vector<bool> result;
        for(int i=0; i<candies.size(); i++)
        {
            result.push_back(candies[i]>=maxCandy);
        }

        return result;
    }
};
