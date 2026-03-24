class Solution:
    def searchRange(self, nums: List[int], target: int) -> List[int]:

        def findFirst():
            l, r = 0, len(nums) - 1
            ans = -1
            while l <= r:
                mid = (l + r) // 2
                if nums[mid] >= target:
                    r = mid - 1
                else:
                    l = mid + 1
                if nums[mid] == target:
                    ans = mid
            return ans

        def findLast():
            l, r = 0, len(nums) - 1
            ans = -1
            while l <= r:
                mid = (l + r) // 2
                if nums[mid] <= target:
                    l = mid + 1
                else:
                    r = mid - 1
                if nums[mid] == target:
                    ans = mid
            return ans

        return [findFirst(), findLast()]
