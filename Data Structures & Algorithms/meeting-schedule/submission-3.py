"""
Definition of Interval:
class Interval(object):
    def __init__(self, start, end):
        self.start = start
        self.end = end
"""

class Solution:
    def canAttendMeetings(self, intervals: List[Interval]) -> bool:
        intervals.sort(key=lambda x: x.start)

        if not intervals:
            return True
        s = intervals[0].start
        e = intervals[0].end
        for i in range(1,len(intervals)):
            if intervals[i].start < e:
                return False
            s = intervals[i].start
            e = intervals[i].end
        return True