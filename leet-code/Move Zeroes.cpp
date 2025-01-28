class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        if(nums.size()==1)
        {
            return;
        }

        int insertPos = 0; 
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != 0) {
                nums[insertPos++] = nums[i];
            }
        }

        // Fill the rest of the array with zeroes
        while (insertPos < nums.size()) {
            nums[insertPos++] = 0;
        }
    }
};
