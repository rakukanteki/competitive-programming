class Solution:
    def findMaxAverage(self, nums: List[int], k: int) -> float:
        n = len(nums)

        currSum=0
        for i in range(k):
            currSum += nums[i]
        
        maxAvg = currSum/k

        for i in range(k, n):
            currSum += nums[i]
            currSum -= nums[i-k]

            avg = currSum/k
            maxAvg = max(maxAvg, avg)
        
        return maxAvg

