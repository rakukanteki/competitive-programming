class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int maxlen = 0, left=0, right=0, zeros=0;
        while(right<nums.size())
        {
            if(nums[right]==0){zeros++;}
            if(zeros>k)
            {
                if(nums[left]==0){zeros--;}
                left++;
            }
            if(zeros<=k)
            {
                int l = right-left+1;
                maxlen=max(maxlen, l);
            }
            right++;
        }   
        return maxlen;
    }
};
