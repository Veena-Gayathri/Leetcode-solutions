from collections import deque
from typing import List

class Solution:
    def maxSlidingWindow(self, nums: List[int], k: int) -> List[int]:
        dq = deque()  # stores indices
        ans = []

        for i in range(len(nums)):
            
            # remove out-of-window indices
            if dq and dq[0] <= i - k:
                dq.popleft()

            # maintain decreasing order in deque
            while dq and nums[dq[-1]] < nums[i]:
                dq.pop()

            dq.append(i)

            # start recording results once first window is formed
            if i >= k - 1:
                ans.append(nums[dq[0]])

        return ans
