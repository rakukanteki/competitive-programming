class Solution:
    def eraseOverlapIntervals(self, intervals: List[List[int]]) -> int:
        intervals.sort()
        count=0
        PrevEnd = intervals[0][1]

        for start, end in intervals[1:]:
            if start >= PrevEnd:
                PrevEnd = end
            else:
                count += 1
                PrevEnd = min(end, PrevEnd)

        return count
