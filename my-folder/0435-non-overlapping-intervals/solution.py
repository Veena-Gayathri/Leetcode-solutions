class Solution:
    def eraseOverlapIntervals(self, intervals: List[List[int]]) -> int:
        intervals.sort(key=lambda x: x[1])  # sort by end time
        
        count = 0
        prev_end = intervals[0][1]
        
        for i in range(1, len(intervals)):
            if intervals[i][0] >= prev_end:
                prev_end = intervals[i][1]  # no overlap → keep
            else:
                count += 1  # overlap → remove
        
        return count
