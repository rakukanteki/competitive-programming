class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        int n=grid.size(), count=0;

        map<vector<int>, int> mp;
        for(int row=0; row<n; row++)    {mp[grid[row]]++;}

        for(int col=0; col<n; col++)    
        {
            vector<int> temp;
            for(int row=0; row<n; row++)
            {
                temp.push_back(grid[row][col]);
            }

            count += mp[temp];
        }

        return count;
    }
};
