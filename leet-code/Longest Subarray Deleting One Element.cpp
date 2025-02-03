class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int left=0, right=0;
        int last_zero = -1;
        int maxLen = 0;

        while(right<nums.size())
        {
            if(nums[right]==0)
            {
                left = last_zero+1;
                last_zero = right;
            }

            maxLen = max(maxLen, right-left);
            right++;
        }

        return maxLen;
    }
};
