
from typing import List

class Solution:
    def nextPermutation(self, nums: List[int]) -> None:
        n = len(nums)
        j = n - 1

        # Step 1: find dip
        while j > 0 and nums[j - 1] >= nums[j]:
            j -= 1

        if j == 0:
            nums.reverse()
            return

        # Step 2: find next greater
        i = j - 1
        k = n - 1
        while nums[k] <= nums[i]:
            k -= 1

        # Step 3: swap
        nums[i], nums[k] = nums[k], nums[i]

        # Step 4: reverse suffix
        nums[j:] = reversed(nums[j:])

"""
123465
is 6> 5-> move to 6
is 4>6 -> swap 4 and 6

654321
is 2>1-> move to 2
...
is 6>5-> move to 6
nothing on the left, so reverse the array
"""
